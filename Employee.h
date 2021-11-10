#pragma once
#include <string>
#include "Person.h"

class Employee : public Person {
    private:
        std::string name;
        int salary;
        int birthYear;
    public:
        Employee(const std::string &name = "", int salary = 0, int birthYear = 0);

        int getSalary() const;
        void setSalary(int salary);

        friend std::ostream &operator<<(std::ostream &os, const Employee &employee);
        friend std::istream &operator>>(std::istream &is, Employee &employee);
};



