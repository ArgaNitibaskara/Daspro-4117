#include <iostream>

int main()
{
    for (int a = 100; a >= 1; a--) {
        if (a % 2 != 0) {
            continue;
        }
        std::cout << a << "\n";
    }
}
