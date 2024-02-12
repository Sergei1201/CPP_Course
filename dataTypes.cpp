#include <iostream>
#include <string>
#include <climits>
#include <cmath>
int main()
{
    // Defining variables
    char x = 'A';
    bool isMale = true;
    bool isFemaile = false;
    float a{};
    double b{};
    long double c{};
    const int z = 10;
    enum
    {
        d = 25
    };

    std::cout << sizeof(char) << std::endl;
    std::cout << (int)x << std::endl;
    std::cout << sizeof(short) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    std::cout << SHRT_MAX << std::endl;
    if (isFemaile)
    {
        std::cout << "You are a female" << std::endl;
    }
    else
    {
        std::cout << "You are not a female" << std::endl;
    }
    if (isMale)
    {
        std::cout << "You are a male" << std::endl;
    }
    else
    {
        std::cout << "You are not a male" << std::endl;
    }
    std::cout << __LDBL_DIG__ << std::endl;
    std::cout << __DBL_DIG__ << std::endl;
    std::cout << __FLT_DIG__ << std::endl;

    std::cout << sqrt(64) << std::endl;
    std::cout << remainder(8, 3) << std::endl;
    std::cout << 8 % 3 << std::endl;
    std::cout << fmax(3, 5) << std::endl;
    std::cout << fmin(4, 2) << std::endl;
    std::cout << ceil(3.2) << std::endl;
    std::cout << floor(3.6) << std::endl;
    std::cout << round(3.6) << std::endl;
    std::cout << trunc(3.6) << std::endl;

    return 0;
}