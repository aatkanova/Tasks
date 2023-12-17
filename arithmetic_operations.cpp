//14. Написать две функции (наибольший общий делитель двух чисел, остаток от деления двух чисел) 
//для арифметических расчетов и оформить их в отдельном файле.

#include <iostream>
#include "arithmetic_operations.h" // Подключение заголовочного файла

int main() {
    int num1 = 24;
    int num2 = 18;

    std::cout << "НОД чисел " << num1 << " и " << num2 << " = " << gcd(num1, num2) << std::endl;
    std::cout << "Остаток от деления " << num1 << " на " << num2 << " = " << remainder(num1, num2) << std::endl;

    return 0;
}
