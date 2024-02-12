#include <iostream>
#include <string>
#include <cmath>

// Function forward declaration
std::string greetings(std::string firstName, std::string lastName);

int main()
{
    // Variable definition
    std::string firstName{};
    std::string lastName{};
    std::string name = "Person";
    std::string yourName{};
    getline(std::cin, yourName);
    std::cout << "Hello " + yourName << std::endl;
    std::cout << name[0] << std::endl;
    std::cout << name.length() << std::endl;
    std::cout << "Enter you first name: ";
    std::cin >> firstName;
    std::cout << "Entre you last name: ";
    std::cin >> lastName;

    std::cout << greetings(firstName, lastName) << std::endl;
    return 0;
}

// Function definition
std::string greetings(std::string firstName, std::string lastName)
{
    return "Welcome " + firstName + " " + lastName;
}