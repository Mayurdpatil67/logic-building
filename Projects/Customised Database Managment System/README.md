## Customised Database Management System (CDMS)

The Customised Database Management System (DBMS) is a simple database system implemented in Java. It provides essential database functionalities, including creating databases, tables, inserting data, retrieving data, updating records, and deleting records.

## Table of Contents

Features
Installation
Usage
Contributing

## Features
The Customised DBMS supports the following features:

Create new databases.
Create tables within databases.
Insert data into tables.
Retrieve data from tables with basic queries.
Update existing records in tables.
Delete records from tables.
Display all records in a table.
Drop databases and tables.
Execute basic SQL-like queries for searching data in tables.

## Installation
To compile and run the Customised DBMS project, follow these steps:

Clone the repository:
git clone https://github.com/Mayurdpatil67/customised-database-management-system.git

Navigate to the project directory:
cd customised-database-management-system

Compile the Java source code:
javac DBMS.java

Run the DBMS program:
java DBMS

## Usage
Once the DBMS system is running, you can use the following commands:

Create a new table:
create_table employees "id INT, name VARCHAR(100), salary DOUBLE"

Insert data into a table:
insert employees "1, 'John Doe', 50000"

Retrieve data from a table:
select employees "id, name"

## Contributing
Contributions to the Customised DBMS are welcome! If you find any issues or have ideas for improvements, feel free to open an issue or submit a pull request.

Fork the repository.
Create your feature branch (git checkout -b feature/AmazingFeature).
Commit your changes (git commit -m 'Add some AmazingFeature').
Push to the branch (git push origin feature/AmazingFeature).
Open a pull request.

