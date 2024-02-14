#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <array>

// Function forward declaration
// void print_array(int arr[], int size);

// int main()
// {
//     int arr1[] = {1, 2, 3, 4, 5, 6};
//     int size = sizeof(arr1) / sizeof(arr1[0]);
//     // Invoke print_array function
//     print_array(arr1, size);
//     return 0;
// }

// // Function definition
// void print_array(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         std::cout << arr[i] << "\t";
//     }
//     std::cout << std::endl;
// }

// Templatized array
// Function forward declaration
// void print_array(std::array<int, 6> arr);

// int main()
// {
//     // Variables declaration
//     std::array<int, 6> arr1{2, 3, 4, 5, 6, 7};
//     print_array(arr1);
//     return 0;
// }

// // Function declaration
// void print_array(std::array<int, 6> arr)
// {
//     for (auto element : arr)
//     {
//         std::cout << element << "\t";
//     }
//     std::cout << std::endl;
// }

// Passing a vector to a function as an argument
// Function declaration
void print_vector(std::vector<int>);

int main()
{
    // Declare a vector variable
    std::vector<int> vector{};
    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);
    print_vector(vector);
    return 0;
}

// Function definition block
void print_vector(std::vector<int> vector)
{
    for (auto element : vector)
    {
        std::cout << element << "\t";
    }
    std::cout << std::endl;
}