import java.util.*;

class Student {
    private static int Generator = 0;
    public final int RID;
    public String Name;
    public int Salary;

    public Student(String name, int salary) {
        this.RID = ++Generator;
        this.Name = name;
        this.Salary = salary;
    }

    public void Display() {
        System.out.println(RID + "\t" + Name + "\t" + Salary);
    }
}

class DBMS {
    private final Map<Integer, Student> students = new HashMap<>();

    public void Start() {
        Scanner scan = new Scanner(System.in);
        System.out.println("Mayur's customised DBMS started successfully....");

        while (true) {
            System.out.print("Mayur's DBMS console > ");
            String input = scan.nextLine().replace(";", "").trim();
            if (input.isEmpty())
                continue;

            String[] tokens = input.split("\\s+");
            switch (tokens[0].toLowerCase()) {
                case "help" -> showHelp();
                case "exit" -> {
                    System.out.println("Thank you for using Mayur's DBMS");
                    return;
                }
                case "select" -> {
                    if (tokens.length == 4)
                        displayAll();
                }
                case "insert" -> insertStudent(tokens);
                case "update" -> updateStudent(tokens);
                case "delete" -> deleteStudent(tokens);
                case "aggregatemax" -> aggregate("max");
                case "aggregatemin" -> aggregate("min");
                case "aggregatesum" -> aggregate("sum");
                case "aggregateavg" -> aggregate("avg");
                case "aggregatecount" -> System.out.println("Count: " + students.size());
                default -> System.out.println("Invalid command. Type 'Help' for available commands.");
            }
        }
    }

    private void showHelp() {
        System.out.println("""
                Commands:
                  Help                                : Display this help
                  Exit                                : Terminate DBMS
                  select * from student               : Display all records
                  Insert into student <Name> <Salary>: Insert a new record
                  Update student set Name = 'XYZ' where RID = <rid>  : Update name
                  Update student set Salary = <val> where RID = <rid>: Update salary
                  Delete from student where RID = <rid> : Delete record by RID
                  AggregateMax                        : Display record with maximum salary
                  AggregateMin                        : Display record with minimum salary
                  AggregateSum                        : Display sum of salaries
                  AggregateAvg                        : Display average salary
                  AggregateCount                      : Display record count
                """);
    }

    private void insertStudent(String[] tokens) {
        if (tokens.length != 5) {
            System.out.println("Invalid INSERT command format.");
            return;
        }
        try {
            String name = tokens[3];
            int salary = Integer.parseInt(tokens[4]);
            Student student = new Student(name, salary);
            students.put(student.RID, student);
            System.out.println("Record inserted successfully.");
        } catch (NumberFormatException e) {
            System.out.println("Invalid salary value.");
        }
    }

    private void updateStudent(String[] tokens) {
        if (tokens.length != 10 || !"set".equalsIgnoreCase(tokens[2]) || !"where".equalsIgnoreCase(tokens[6])) {
            System.out.println("Invalid UPDATE command format.");
            return;
        }
        try {
            int rid = Integer.parseInt(tokens[9]);
            Student student = students.get(rid);
            if (student == null) {
                System.out.println("Record not found.");
                return;
            }
            if ("Name".equalsIgnoreCase(tokens[3])) {
                student.Name = tokens[5].replace("'", "");
            } else if ("Salary".equalsIgnoreCase(tokens[3])) {
                student.Salary = Integer.parseInt(tokens[5]);
            } else {
                System.out.println("Unknown field '" + tokens[3] + "' for update.");
                return;
            }
            System.out.println("Record updated successfully.");
        } catch (NumberFormatException e) {
            System.out.println("Invalid numeric value.");
        }
    }

    private void deleteStudent(String[] tokens) {
        if (tokens.length != 7 || !"from".equalsIgnoreCase(tokens[1]) || !"student".equalsIgnoreCase(tokens[2])) {
            System.out.println("Invalid DELETE command format.");
            return;
        }
        try {
            int rid = Integer.parseInt(tokens[6]);
            if (students.remove(rid) != null) {
                System.out.println("Record deleted.");
            } else {
                System.out.println("Record not found.");
            }
        } catch (NumberFormatException e) {
            System.out.println("Invalid RID value.");
        }
    }

    private void displayAll() {
        if (students.isEmpty()) {
            System.out.println("No records available.");
            return;
        }
        students.values().forEach(Student::Display);
    }

    private void aggregate(String type) {
        if (students.isEmpty()) {
            System.out.println("No records available for aggregation.");
            return;
        }
        switch (type) {
            case "max" -> students.values().stream().max(Comparator.comparingInt(s -> s.Salary)).ifPresent(s -> {
                System.out.println("Student with maximum salary:");
                s.Display();
            });
            case "min" -> students.values().stream().min(Comparator.comparingInt(s -> s.Salary)).ifPresent(s -> {
                System.out.println("Student with minimum salary:");
                s.Display();
            });
            case "sum" -> System.out
                    .println("Summation of salaries: " + students.values().stream().mapToInt(s -> s.Salary).sum());
            case "avg" -> System.out.println(
                    "Average salary: " + students.values().stream().mapToInt(s -> s.Salary).average().orElse(0));
        }
    }

    public static void main(String[] args) {
        new DBMS().Start();
    }
}
