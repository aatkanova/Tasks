//10.Написать три функции для округления чисел (по правилам, к меньшему целому, к большему целому) 
//и оформить их в отдельном файле.
#include <iostream>
#include "rounding.h" // Подключение заголовочного файла

int main() {
    double number = 3.6;

    // Округление числа до ближайшего целого
    double nearest = roundToNearest(number);
    std::cout << "Ближайшее целое к " << number << " = " << nearest << std::endl;

    // Округление числа в меньшую сторону
    double down = roundDown(number);
    std::cout << "Округление в меньшую сторону от " << number << " = " << down << std::endl;

    // Округление числа в большую сторону
    double up = roundUp(number);
    std::cout << "Округление в большую сторону от " << number << " = " << up << std::endl;

    return 0;
}
