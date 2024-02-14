#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <random>

int main()
{
    // Writing to a file
    std::ofstream file{};
    file.open("Example.txt", std::ios::app);
    if (file.is_open())
    {
        file << "This is an example of writing to a file" << std::endl;
        file << "This is another example of writing to a file by appending information to it" << std::endl;
        file.close();
    }
    else
    {
        std::cerr << "An error occurred while opening the file" << std::endl;
    }

    // Reading from a file and outputting result to the console
    std::ifstream file2("Example.txt");
    if (file2.is_open())
    {
        std::string line{};
        std::vector<std::string> lines{};
        while (std::getline(file2, line))
        {
            lines.push_back(line);
        }
        for (std::string line : lines)
        {
            std::cout << line << std::endl;
        }
        std::cout << std::endl;
        file2.close();
    }
    else
    {
        std::cerr << "An error occurred while opening the file" << std::endl;
    }

    return 0;
}