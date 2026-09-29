# Virtual File System (VFS)

The **Virtual File System (VFS)** is a simple file system implementation written in C. It provides basic file operations such as creating, opening, reading, writing, and deleting files.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

The Virtual File System supports the following features:

- **Create** new files with specified permissions.
- **Open** existing files for reading and writing.
- **Read** data from files.
- **Write** data to files.
- **Close** files.
- **List** all files in the file system.
- **Get information** about files (size, permissions, etc.).
- **Remove** files from the file system.
- **Truncate** files to remove all data.
- **File seeking** capabilities for reading/writing at specific file offsets.

## Installation

To compile and run the Virtual File System (VFS) project, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/yourusername/virtual-file-system.git
   ```

2. Navigate to the project directory:

   ```bash
   cd virtual-file-system
   ```

3. Compile the source code:

   ```bash
   gcc -o vfs vfs.c
   ```

   This will generate the executable named `vfs`.

4. Run the VFS program:

   ```bash
   ./vfs
   ```

## Usage

Once the VFS system is running, you can use the following commands to interact with the file system:

1. **Create a new file:**

   ```bash
   create <filename> <permissions>
   ```

   Example:

   ```bash
   create myfile.txt 644
   ```

2. **Open a file:**

   ```bash
   open <filename>
   ```

   Example:

   ```bash
   open myfile.txt
   ```

3. **Write data to a file:**

   ```bash
   write <filename> <data>
   ```

   Example:

   ```bash
   write myfile.txt "Hello, World!"
   ```

4. **Read data from a file:**

   ```bash
   read <filename> <num_bytes>
   ```

   Example:

   ```bash
   read myfile.txt 100
   ```

5. **List all files:**

   ```bash
   list
   ```

6. **Get file information:**

   ```bash
   stat <filename>
   ```

   Example:

   ```bash
   stat myfile.txt
   ```

7. **Remove a file:**

   ```bash
   remove <filename>
   ```

   Example:

   ```bash
   remove myfile.txt
   ```

8. **Close a file:**

   ```bash
   close <filename>
   ```

   Example:

   ```bash
   close myfile.txt
   ```

9. **Truncate a file:**

   ```bash
   truncate <filename>
   ```

   Example:

   ```bash
   truncate myfile.txt
   ```

10. **File seek operation:**

    ```bash
    seek <filename> <position>
    ```

    Example:

    ```bash
    seek myfile.txt 50
    ```

## Contributing

Contributions to the Virtual File System (VFS) are welcome! If you find any issues or have ideas for improvements, feel free to open an issue or submit a pull request.

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/AmazingFeature`).
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4. Push to the branch (`git push origin feature/AmazingFeature`).
5. Open a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
