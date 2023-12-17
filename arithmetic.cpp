//9.Написать три функции (степень, обмен значений, сумма чисел) для арифметических
// расчетов и оформить их в отдельном файле.
#include <iostream>
#include "arithmetic.h" // Подключение заголовочного файла

int main() {
    double base = 2.0;
    int exponent = 3;
    int x = 5, y = 10;
    int n = 100;

    // Вызов функции power
    double result = power(base, exponent);
    std::cout << base << " в степени " << exponent << " равно: " << result << std::endl;

    // Вызов функции swapValues
    std::cout << "До обмена: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

    // Вызов функции sumNumbers
    int sum = sumNumbers(n);
    std::cout << "Сумма чисел от 1 до " << n << " равна: " << sum << std::endl;

    return 0;
}
