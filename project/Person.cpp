#include <iostream>
#include <string>
#include <vector>
#include "person.h"

// Constructor
Person::Person(std::string firstName, std::string lastName)
    : m_firstName(firstName), m_lastName(lastName)
{
}
// Default constructor
// Person::Person() = default;
// Methods
void Person::fullInfo()
{
    std::cout << m_firstName << std::endl;
    std::cout << m_lastName << std::endl;
}

// Setter method
void Person::setName(std::string firstName, std::string lastName)
{
    m_firstName = firstName;
    m_lastName = lastName;
}
// Getter method
std::string Person::getFullName()
{
    return m_firstName + " " + m_lastName;
}
// Static methods
void Person::information(std::vector<Person *> people)
{
    for (auto person : people)
    {
        person->fullInfo();
    }
}
