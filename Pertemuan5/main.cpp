#include <iostream>
#include <cmath>
#define _USE_MATH_CONSTANT


int main()
{
    float d = 4;
    float p = 0.5;

    std::cout << "Tgas pertemuan 5: mencari luas lingkaran\n\nSoal: \nDiketahui lingkaran dengan Diameter 4cm, maka tentukan luas lingkaran tersebut";
    float r = p * d;
    std::cout << "\n\nJawab:\nJari-jari lingkaran:\nD=4\nr=0.5*D\nr=0.5*4\nr=" << r ;

    float l = M_PI * r * r;
    std::cout << "\n\nLuas lingkaran:\nl=pi*r^2\nl=3.14*2^2\nl=" << l ;

    return 0;
}
