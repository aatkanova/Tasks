// 12.Написать три функции для работы с числом и его делителями (сумма делителей, 
//сумма четных делителей, сумма нечетных делителей) и оформить их в отдельном файле.

#include <iostream>
#include "divisors.h" // Подключение заголовочного файла

int main() {
    int number = 20;

    std::cout << "Сумма всех делителей числа " << number << " = " << sumOfDivisors(number) << std::endl;
    std::cout << "Сумма четных делителей числа " << number << " = " << sumOfEvenDivisors(number) << std::endl;
    std::cout << "Сумма нечетных делителей числа " << number << " = " << sumOfOddDivisors(number) << std::endl;

    return 0;
}
