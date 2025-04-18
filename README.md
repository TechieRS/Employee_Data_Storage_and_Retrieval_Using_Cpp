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
```

### On Linux/Mac

```bash
g++ main.cpp -o employee_system
./employee_system
```

## Sample Usage

When you run the program, you'll see a menu like this:

```
1. Add Employee  
2. Search Employee by ID  
3. Display All Employees  
4. Exit  
Enter choice:
```

Just enter the number corresponding to the action you want to perform.

## Example

```
Enter Employee ID: 101  
Enter Employee Name: John Doe  
Enter Salary: 50000  
Record added successfully.
```

## Notes

- The program uses binary file I/O for efficiency.
- Employee names are limited to 50 characters.
- Each run appends new data to `employees.dat`.

## License

This project is open source and available under the [MIT License](LICENSE).
