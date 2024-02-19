#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include <vector>

// Inheritance
class Employee : public Person
{
private:
    // Private class members
    std::string m_department{};

public:
    // Constructor
    Employee(std::string firstName, std::string lastName, std::string department);
    // Default constructor
    Employee() = default;

    // Methods
    void fullInfo() override;

    // Setter method
    void setDepartment(std::string department);

    // Getter method
    std::string getDepartment();
};

#endif