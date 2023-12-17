//11.Написать три функции для определения характеристик числа 
//(четное/нечетное, простое/непростое, совершенное/несовершенное) и оформить их в отдельном файле.

#include <iostream>
#include "characteristics.h" // Подключение заголовочного файла

int main() {
    int num1 = 6;
    int num2 = 11;
    int num3 = 28;

    std::cout << num1 << " четное? " << (isEven(num1) ? "Да" : "Нет") << std::endl;
    std::cout << num2 << " простое? " << (isPrime(num2) ? "Да" : "Нет") << std::endl;
    std::cout << num3 << " совершенное? " << (isPerfect(num3) ? "Да" : "Нет") << std::endl;

    return 0;
}
