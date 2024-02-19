#include <iostream>
#include <string>
#include <vector>
#include "person.h"
#include "employee.h"
// Constructor
Employee::Employee(std::string firstName, std::string lastName, std::string department)
    // Invoke the parent constructor
    : Person(firstName, lastName), m_department(department)
{
}
// Default constructor
// Employee::Employee() = default;

// Methods
void Employee::fullInfo()
{
    std::cout << this->getFullName() << std::endl;
    std::cout << getDepartment() << std::endl;
}

// Setter method
void Employee::setDepartment(std::string department)
{
    m_department = department;
}

// Getter method
std::string Employee::getDepartment()
{
    return m_department;
}
