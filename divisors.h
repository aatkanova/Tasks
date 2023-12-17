//12. Написать три функции для работы с числом и его делителями (сумма делителей, 
//сумма четных делителей, сумма нечетных делителей) и оформить их в отдельном файле.

#ifndef DIVISORS_H
#define DIVISORS_H

#include <cmath>

// Функция для вычисления суммы всех делителей числа
int sumOfDivisors(int number) {
    int sum = 0;
    for (int i = 1; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            if (i == (number / i)) {
                sum += i;
            } else {
                sum += (i + number / i);
            }
        }
    }
    return sum;
}

// Функция для вычисления суммы четных делителей числа
int sumOfEvenDivisors(int number) {
    int sum = 0;
    for (int i = 1; i <= sqrt(number); ++i) {
        if (number % i == 0 && i % 2 == 0) {
            if (i == (number / i)) {
                sum += i;
            } else {
                sum += (i + number / i);
            }
        }
    }
    return sum;
}

// Функция для вычисления суммы нечетных делителей числа
int sumOfOddDivisors(int number) {
    int sum = 0;
    for (int i = 1; i <= sqrt(number); ++i) {
        if (number % i == 0 && i % 2 != 0) {
            if (i == (number / i)) {
                sum += i;
            } else {
                sum += (i + number / i);
            }
        }
    }
    return sum;
}

#endif // DIVISORS_H
