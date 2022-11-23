#include <iostream>

int main()
{
    int sum = 0;
    int count = 20;

    for (int a = 1; a <= count; a++) {
        sum += a;

        std::cout << a << "\n";
    }

    std::cout << "\n";
    std::cout << "jumlah = " << sum << "\n";
    std::cout << "rata-rata = " << sum / count << "\n";
}