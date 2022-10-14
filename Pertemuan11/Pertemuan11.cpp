// Pertemuan11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    /*
    std::cout << "Fibonacci less than 100\n";
    int a = 100;
    do {
        if (a >= 0) {
            std::cout << "\n" << a;
            a--;
        }
    } while (a >= 0);
    */
    int b = 100, t1 = 0, t2 = 1, result;
    result = t1 + t2;

    while (result <= b)
    {
        std::cout << result << "\n";
        t1 = t2;
        t2 = result;
        result = t1 + t2;
    }
    return 0;
}