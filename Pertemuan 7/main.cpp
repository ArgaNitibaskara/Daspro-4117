#include <iostream>


int main()
{
    int x;
    std::string x1 = "Teknik Informatka";
    std::string x2 = "Sistem Informasi";
    std::string x3 = "DKV";

    std::cout << "=====Jurusan=====";
    std::cout << "\n1." << x1;
    std::cout << "\n2." << x2;
    std::cout << "\n3." << x3;
    std::cout << "\nMasukkan Jurusan Anda:  ";
    std::cin >> x;

    if (x == 1) {
        std::cout << "Jurusan anda adalah  " << x1;
    }
    if (x == 2) {
        std::cout << "Jurusan anda adalah  " << x2;
    }
    if (x == 3) {
        std::cout << "Jurusan anda adalah  " << x3;
    }
    if (x < 0 || x > 3) {
        std::cout << "Jurusan tidak diketahui";
    }

std::cout << "\n";

    //number1
    int a;
    std::cout << "\nMasukan angka: ";
    std::cin >> a;
    if (a <= 25 && a <= 50 && a % 2 == 0) {
        std::cout << "bilangan sesuai";
    }
    else{
        std::cout << "bilangan tidak sesuai";
    }

std::cout << "\n";

    //number2
    int b;
    std::cout << "\nMasukan angka: ";
    std::cin >> b;
    if (b % 2 == 1 && (13 <= b || 5 >= b)) {
        std::cout << "bilangan sesuai";
    }
    else{
        std::cout << "bilangan tidak sesuai";
    }

std::cout << "\n";

    //number3
    int c;
    std::cout << "\nMasukan angka: ";
    std::cin >> c;

    if (25 <= c && c <= 50 || (3 <= c && c <= 15 && c % 2 == 1)) {
        std::cout << "bilangan sesuai";
    }
    else {
        std::cout << "bilangan tidak sesuai";
    }
    return 0;
}
