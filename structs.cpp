#include <iostream>
#include <vector>
#include <string>

// Defining a struct
struct Person
{
    std::string first_name{};
    std::string last_name{};
    int age{};

    std::string get_full_name()
    {
        return first_name + " " + last_name;
    }
};
// Inheritance
struct Employee : Person
{
    std::string m_department{};

    void set_department(std::string department)
    {
        m_department = department;
    }
    std::string get_department()
    {
        return m_department;
    }
};

int main()
{
    Person p1{"Sergei", "Sokolov", 40};
    std::cout << p1.first_name << " " << p1.last_name << " " << p1.age << std::endl;
    std::cout << p1.get_full_name() << std::endl;
    Employee e1{"Daniil", "Sokolov", 9, "Web Development"};
    std::cout << e1.get_full_name() << std::endl;
    e1.set_department("System programming");
    std::cout << e1.get_department();
    std::cout << std::endl;
    return 0;
}
