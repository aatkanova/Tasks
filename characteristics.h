//11.Написать три функции для определения характеристик числа 
//(четное/нечетное, простое/непростое, совершенное/несовершенное) и оформить их в отдельном файле.

#ifndef CHARACTERISTICS_H
#define CHARACTERISTICS_H

#include <cmath>

// Функция для определения, является ли число четным
bool isEven(int number) {
    return (number % 2 == 0);
}

// Функция для определения, является ли число простым
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

// Функция для определения, является ли число совершенным
bool isPerfect(int number) {
    int sum = 1;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            if (i * i != number) {
                sum += i + number / i;
            } else {
                sum += i;
            }
        }
    }
    return (sum == number && number != 1);
}

#endif // CHARACTERISTICS_H
