#include <iostream>
#include "Student.h"
#include "Employee.h"
#include "Person.h"

float averageAge (const Person array[], int numberOfElements);

int main() {
    Person personList[4] = {
            Student ("test", "test", 2001),
            Student ("test", "test", 2002),
            Employee("test", 2000, 2003),
            Employee("test", 2000, 2004)
    };

    std::cout << "Average: " << averageAge(personList, 4) << std::endl;
    return 0;
}

float averageAge (const Person array[], int numberOfElements) {
    int sum = 0;
    for (int i = 0; i < numberOfElements; i++) {
        sum += array[i].getAge(2021);
    }

    return (float) sum / numberOfElements;
}
