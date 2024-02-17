#include <iostream>
#include <vector>
#include <string>

class Person
{
protected:
    // Declaring private data members
    std::string m_first_name{};
    std::string m_last_name{};
    int m_age{};

public:
    // Constructor
    Person(std::string first_name, std::string last_name, int age)
        : m_first_name(first_name), m_last_name(last_name), m_age(age)
    {
    }
    // Default constructor
    Person() = default;
    // Defining setters & getters
    void set_name(std::string first_name, std::string last_name)
    {
        m_first_name = first_name;
        m_last_name = last_name;
        std::cout << std::endl;
    }
    std::string get_name()
    {
        return m_first_name + " " + m_last_name;
    }
    // Member functions
    virtual void full_info()
    {
        std::cout << m_first_name << " " << m_last_name << " " << m_age << std::endl;
    }
    // Static methods
    static void information(std::vector<Person *> people)
    {
        // Loop through an array of object pointers and output information on each person/employee
        for (auto person : people)
        {
            person->full_info();
        }
    }
};
// Inheritance
class Employee : public Person
{

private:
    // Data members
    std::string m_department{};

public:
    // Constructor
    Employee(std::string first_name, std::string last_name, int age, std::string department)
        // Calling the parent constructor
        : Person(first_name, last_name, age), m_department(department)
    {
    }
    // Default constructor for the derived class
    Employee() = default;
    // Getters & setters
    void set_department(std::string department)
    {
        m_department = department;
    }
    std::string get_department()
    {
        return m_department;
    }
    // Polymorphism (rededining base classes' methods)
    void full_info() override
    {
        std::cout << this->m_first_name << " " << this->m_last_name << " " << this->m_age << " " << m_department << std::endl;
    }
};

int main()
{
    Person p1("Sergei", "Sokolov", 40);
    Person p2;
    std::cout << p1.get_name();
    p1.set_name("Daniil", "Sokolov");
    std::cout << p1.get_name();
    std::cout << std::endl;
    Employee e1("John", "Doe", 45, "Development department");
    e1.full_info();
    std::vector<Person *> people{};
    people.push_back(&p1);
    people.push_back(&e1);
    Person::information(people);
    return 0;
}