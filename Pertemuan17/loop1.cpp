#include <iostream>

int main()
{
    int b = 1;

    for (int a = 100; a >= 1; a--) {
        std::cout << "a-" << a << " dan " << "b-" << b << std::endl;
        b++;
    }
}
