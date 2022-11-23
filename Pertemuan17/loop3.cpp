
#include <iostream>

int main()
{
    for (int a = 100; a >= 1; a--) {
        if (a == 54) {
            break;
        }
        else {
            std::cout << a << "\n";
        }
    }
}
