#include <iostream>
#include "Employee.h"

Employee::Employee(const std::string &name, int salary, int birthYear) : Person(name, birthYear), salary(salary) {}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    Employee::salary = salary;
}

std::ostream &operator<<(std::ostream &os, const Employee &employee) {
    os << "[\"" << employee.name << "\", " << employee.salary << "€, " << employee.birthYear << "]";
    return os;
}

std::istream &operator>>(std::istream &is, Employee &employee) {
    std::cout << "Name: ";
    is >> employee.name;
    std::cout << "Salary: ";
    is >> employee.salary;
    std::cout << "BirthYear: ";
    is >> employee.birthYear;

    return is;
}
