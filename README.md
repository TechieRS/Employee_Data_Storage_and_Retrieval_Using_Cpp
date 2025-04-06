# Employee Management System (C++)

This is a simple console-based **Employee Management System** built using C++. It allows you to add, search, and display employee records using a binary file (`employees.dat`) for storage.

## Features

- Add a new employee with ID, name, and salary
- Search an employee by their ID
- Display all stored employee records
- Data is stored persistently using a binary file

## File Structure

- `main.cpp`: Contains all the functionality and logic of the program
- `employees.dat`: Binary file where all employee records are stored

## How to Compile and Run

### On Windows (using g++)

```bash
g++ main.cpp -o employee_system
employee_system

### On Linux/Mac
```bash
g++ main.cpp -o employee_system
./employee_system
