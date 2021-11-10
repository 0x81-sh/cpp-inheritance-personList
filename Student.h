#pragma once
#include <string>
#include <ostream>
#include "Person.h"

class Student : public Person {
    private:
        std::string form;
    public:
        Student(const std::string &name = "", const std::string &form = "", int birthYear = 0);

        const std::string &getForm() const;
        void setForm(const std::string &form);

        friend std::ostream &operator<<(std::ostream &os, const Student &student);
        friend std::istream &operator>>(std::istream &is, Student &student);
};



