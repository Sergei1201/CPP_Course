#include <iostream>
#include <string>

int main()
{
    int a = 5;
    int *b = &a;
    *b = 10;
    std::cout << a << std::endl;
    return 0;
}