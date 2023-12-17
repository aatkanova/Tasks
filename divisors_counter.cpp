//7. Написать собственную функцию, с аргументами возвращающую значение, для нахождения 
//количества делителей введенного числа. Функцию оформить как отдельный файл.
#include <iostream>
#include "divisors_counter.h" // включаем заголовочный файл

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    int divisors = countDivisors(number); // используем функцию для подсчета делителей числа

    std::cout << "Количество делителей числа " << number << " равно: " << divisors << std::endl;

    return 0;
}
