#include <iostream>
#include <string>
#include <cmath>

// Function prototype & forward declaration
std::string greetings(std::string firstName, std::string lastName);
void userInfo(std::string firstName, std::string lastName);
double power(double base, int exponent);

int main()
{
    std::string firstName{};
    std::string lastName{};
    int a{};
    int b{};
    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Invoke the function
    std::cout << greetings(firstName, lastName) << std::endl;

    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "Enter the power number: ";
    std::cin >> b;
    std::cout << "The result is: " << power(a, b) << std::endl;
    userInfo(firstName, lastName);
    return 0;
}

// Function definition
std::string greetings(std::string firstName, std::string lastName)
{
    return "Hello " + firstName + " " + lastName;
}
double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}
void userInfo(std::string firstName, std::string lastName)
{
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
}
