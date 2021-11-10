#pragma once
#include <string>

class Person {
    protected:
        std::string name;
        int birthYear;
    public:
        Person(const std::string &name = "", int birthYear = 0);
        int getAge (int currentYear) const;

        const std::string &getName() const;
        void setName(const std::string &name);
        int getBirthYear() const;
        void setBirthYear(int birthYear);
};



