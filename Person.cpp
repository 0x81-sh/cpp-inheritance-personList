#include "Person.h"
#include <iostream>

Person::Person(const std::string &name, int birthYear) : name(name), birthYear(birthYear) {}

int Person::getAge(int currentYear) const {
    return currentYear - birthYear;
}

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

int Person::getBirthYear() const {
    return birthYear;
}

void Person::setBirthYear(int birthYear) {
    Person::birthYear = birthYear;
}
