#include <iostream>
#include <string>
#include <vector>

class Person
{
protected:
    // Private class members
    std::string m_firstName{};
    std::string m_lastName{};

public:
    // Constructor
    Person(std::string firstName, std::string lastName)
        : m_firstName(firstName), m_lastName(lastName)
    {
    }
    // Default constructor
    Person() = default;
    // Methods
    virtual void fullInfo()
    {
        std::cout << m_firstName << std::endl;
        std::cout << m_lastName << std::endl;
    }

    // Setter method
    void setName(std::string firstName, std::string lastName)
    {
        m_firstName = firstName;
        m_lastName = lastName;
    }
    // Getter method
    std::string getFullName()
    {
        return m_firstName + " " + m_lastName;
    }
    // Static methods
    static void information(std::vector<Person *> people)
    {
        for (auto person : people)
        {
            person->fullInfo();
        }
    }
};

// Inheritance
class Employee : public Person
{
private:
    // Private class members
    std::string m_department{};

public:
    // Constructor
    Employee(std::string firstName, std::string lastName, std::string department)
        // Invoke the parent constructor
        : Person(firstName, lastName), m_department(department)
    {
    }
    // Default constructor
    Employee() = default;

    // Methods
    void fullInfo() override
    {
        std::cout << this->getFullName() << std::endl;
        std::cout << getDepartment() << std::endl;
    }

    // Setter method
    void setDepartment(std::string department)
    {
        m_department = department;
    }

    // Getter method
    std::string getDepartment()
    {
        return m_department;
    }
};

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