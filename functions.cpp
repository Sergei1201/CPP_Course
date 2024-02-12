#include <iostream>
#include <string>
#include <cmath>

// Function forward declaration
std::string greetings(std::string username);

int main()
{
    // Variable declaration
    std::string username{};
    int age{};
    // Enum class type
    enum class Season
    {
        winter,
        summer,
        fall,
        spring
    };
    Season now = Season::summer;

    // Main function body
    std::cout << "Enter you name please: ";
    getline(std::cin, username);
    std::cout << greetings(username) << std::endl;
    // Example of using enums inside of a switch statement
    switch (now)
    {
    case Season::winter:
        std::cout << "Stay warm and stay at home" << std::endl;
        break;
    case Season::spring:
        std::cout << "It's a little bit warmer now" << std::endl;
        break;
    case Season::fall:
        std::cout << "It's a fall time now" << std::endl;
        break;
    case Season::summer:
        std::cout << "Summer time" << std::endl;
    default:
        break;
    }
    // std::cout << "Enter your age please: ";
    // std::cin >> age;
    // switch (age)
    // {
    // case 17:
    //     std::cout << "You can't have a drink yet" << std::endl;
    //     break;
    // case 19:
    //     std::cout << "You can have a drink" << std::endl;
    //     break;
    // default:
    //     std::cout << "Your age could not be verified" << std::endl;
    //     break;
    // }
    // if (age >= 18 && age <= 60)
    // {
    //     std::cout << "You can have a drink :) " << std::endl;
    // }
    // else if (age >= 61)
    // {
    //     std::cout << "Seems like you are a little too old to have a drink. Sorry. " << std::endl;
    // }
    // else
    // {
    //     std::cout << "I believe it's a little bit to early for you to have a drink. Sorry. Go home " << std::endl;
    // }

    return 0;
}

// Function definition
std::string greetings(std::string username)
{
    return "Hello " + username;
}