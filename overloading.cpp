#include <iostream>
#include <string>

class Position
{
public:
    std::string first_name{};
    std::string last_name{};
    int x{10};
    int y{20};
    // Operator overloading
    Position operator+(Position pos)
    {
        Position new_pos;
        new_pos.x = x + pos.x;
        new_pos.y = y + pos.y;
        return new_pos;
    }
    bool operator==(Position pos)
    {
        if (x == pos.x && y == pos.y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// Operator overloading
std::ostream &operator<<(std::ostream &output, Position person)
{
    output << "First name: " << person.first_name << std::endl
           << "Last name: " << person.last_name;
    return output;
}

std::istream &operator>>(std::istream &input, Position &person)
{
    input >> person.first_name >> person.last_name;
    return input;
}

int main()
{
    Position person;
    std::cin >> person;
    std::cout << person << std::endl;
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " " << pos3.y << " " << std::endl;
    if (pos1 == pos2)
    {
        std::cout << "They are the same\n";
    }
    else
    {
        std::cout << "They are different\n";
    }

    return 0;
}