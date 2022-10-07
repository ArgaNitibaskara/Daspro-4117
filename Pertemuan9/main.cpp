#include <iostream>


int main()
{
    int x = 5;

    while (x <= 1000000) {
        std::cout << "\n" << x;
        x+=5;
    }
    return 0;
}
