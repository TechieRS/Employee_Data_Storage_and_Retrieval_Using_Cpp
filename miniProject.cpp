#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float salary;
};

void addEmployee() {
    ofstream file("employees.dat", ios::app | ios::binary);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    Employee emp;
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    cin.getline(emp.name, 50);
    cout << "Enter Salary: ";
    cin >> emp.salary;
    file.write(reinterpret_cast<char*>(&emp), sizeof(emp));
    file.close();
    cout << "Record added successfully." << endl;
}

void searchEmployee() {
    ifstream file("employees.dat", ios::binary);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    int id;
    cout << "Enter Employee ID to search: ";
    cin >> id;
    Employee emp;
    while (file.read(reinterpret_cast<char*>(&emp), sizeof(emp))) {
        if (emp.id == id) {
            cout << "ID: " << emp.id << "\nName: " << emp.name << "\nSalary: " << emp.salary << endl;
            file.close();
            return;
        }
    }
    cout << "Employee not found!" << endl;
    file.close();
}

void displayAllEmployees() {
    ifstream file("employees.dat", ios::binary);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    Employee emp;
    while (file.read(reinterpret_cast<char*>(&emp), sizeof(emp))) {
        cout << "ID: " << emp.id << "\nName: " << emp.name << "\nSalary: " << emp.salary << "\n-----------------" << endl;
    }
    file.close();
}

int main() {
    int choice;
    do {
        cout << "1. Add Employee\n2. Search Employee by ID\n3. Display All Employees\n4. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: searchEmployee(); break;
            case 3: displayAllEmployees(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}
