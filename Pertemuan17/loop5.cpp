#include <iostream>

int main()
{
    int x = 0;
    int y = -99;
    std::cout << "Program ini akan berhenti jika anda meninputkan angka -99 \n";

    while (x != -99) {
        std::cout << "Masukan nilai anda : ";
        std::cin >> x;
    }

    std::cout << "Keluar karena break\n";
}