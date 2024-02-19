#include <iostream>
#include <string>
#include <vector>
#include "person.h"
#include "employee.h"

int main()
{
    std::vector<Person *> people;
    // Instantiate the Person class
    Person p1("John", "Doe");
    p1.fullInfo();
    std::cout << p1.getFullName() << std::endl;

    Employee e1("Sergei", "Sokolov", "System programming");
    std::cout << e1.getFullName() << std::endl;
    std::cout << e1.getDepartment() << std::endl;
    e1.setDepartment("Web development");
    std::cout << e1.getDepartment() << std::endl;
    e1.fullInfo();
    people.push_back(&p1);
    people.push_back(&e1);
    Person::information(people);

    // e1.setName("Daniil", "Sokolov");
    // std::cout << e1.getName() << std::endl;
    return 0;
}