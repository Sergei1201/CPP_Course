#include <iostream>
#include <string>
#include <vector>

namespace mySpace
{
    // Functions
    double power(double base, double exponent)
    {
        double result = 1;
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }
        return result;
    }

    // Templatized functions
    template <typename T>
    void swap(T &x, T &y)
    {
        T temp = x;
        x = y;
        y = temp;
    }
    template <typename T>
    void swap(T a[], T b[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            T temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }

}

int main()
{
    double base{};
    double exponent{};
    int x{}, y{};
    std::string first_name{};
    std::string last_name{};
    int a[] = {1, 1, 1, 1, 1};
    int b[] = {2, 2, 2, 2, 2};
    const int size = 5;
    // std::cout << "Enter base number: ";
    // std::cin >> base;
    // std::cout << "Enter exponent number: ";
    // std::cin >> exponent;
    // std::cout << "The result is: " << mySpace::power(base, exponent) << std::endl;
    // std::cout << "Enter first number: ";
    // std::cin >> x;
    // std::cout << "Enter second number: ";
    // std::cin >> y;
    // mySpace::swap(x, y);
    // std::cout << x << " " << y << std::endl;
    // std::cout << "Enter your first name: ";
    // std::cin >> first_name;
    // std::cout << "Enter your last name: ";
    // std::cin >> last_name;
    // mySpace::swap(first_name, last_name);
    // std::cout << first_name << " " << last_name << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " " << b[i] << "\t";
    }
    std::cout << std::endl;
    mySpace::swap(a, b, size);
    for (int i = 0; i < size; i++)
    {
        std::cout << a[i] << " " << b[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}