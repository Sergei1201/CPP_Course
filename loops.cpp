#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int arr1[] = {0, 25, 37, 59, 129};
    int arr2[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
    // Loop through the array
    // for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    // {
    //     std::cout << arr1[i] << std::endl;
    // }
    // // Loop through a multidimensional array of integers
    // for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    // {
    //     for (int j = 0; j < sizeof(arr2[0]) / sizeof(arr2[0][0]); j++)
    //     {
    //         std::cout << arr2[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }
    // Loop through an array of integers using a while loop
    // int i = 0;
    // // while (i < sizeof(arr1) / sizeof(arr1[0]))
    // {
    //     std::cout << arr1[i] << std::endl;
    //     i++;
    // }
    // do
    // {
    //     std::cout << arr1[i] << std::endl;
    //     i++;
    // } while (i < sizeof(arr1) / sizeof(arr1[0]));
    int i = 0;
    int j = 0;
    while (i < sizeof(arr2) / sizeof(arr2[0]))
    {
        while (j < sizeof(arr2[0]) / sizeof(arr2[0][0]))
        {
            std::cout << arr2[i][j] << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
        j = 0;
    }

    return 0;
}