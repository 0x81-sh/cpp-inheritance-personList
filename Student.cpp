#include <iostream>
#include "Student.h"

Student::Student(const std::string &name, const std::string &form, int birthYear) : Person(name, birthYear), form(form) {}

const std::string &Student::getForm() const {
    return form;
}

void Student::setForm(const std::string &form) {
    Student::form = form;
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "[\"" << student.name << "\" @ \"" << student.form << "\", " << student.birthYear << "]";
    return os;
}

std::istream &operator>>(std::istream &is, Student &student) {
    std::cout << "Name: ";
    is >> student.name;
    std::cout << "Form: ";
    is >> student.form;
    std::cout << "BirthYear: ";
    is >> student.birthYear;

    return is;
}
