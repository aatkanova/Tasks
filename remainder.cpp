//5.Написать собственную функцию, с аргументами возвращающую значения, для нахождения 
//остатка от деления двух целых чисел. 
#include <iostream>
#include "remainder.h" // Подключение заголовочного файла

int main() {
    int a = 17;
    int b = 5;

    int remainder = findRemainder(a, b);

    if (remainder != -1) {
        std::cout << "Остаток от деления " << a << " на " << b << " = " << remainder << std::endl;
    }

    return 0;
}
