#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
#include <vector>

class Person
{
protected:
    // Private class members
    std::string m_firstName{};
    std::string m_lastName{};

public:
    // Constructor
    Person(std::string firstName, std::string lastName);
    // Default constructor
    Person() = default;
    // Methods
    virtual void fullInfo();

    // Setter method
    void setName(std::string firstName, std::string lastName);
    // Getter method
    std::string getFullName();
    // Static methods
    static void information(std::vector<Person *> people);
};

#endif