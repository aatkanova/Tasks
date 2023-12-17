//14. Написать две функции (наибольший общий делитель двух чисел, остаток от деления двух чисел) 
//для арифметических расчетов и оформить их в отдельном файле.

#ifndef ARITHMETIC_OPERATIONS_H
#define ARITHMETIC_OPERATIONS_H

// Функция для нахождения наибольшего общего делителя (НОД) двух чисел
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функция для нахождения остатка от деления двух чисел
int remainder(int dividend, int divisor) {
    return dividend % divisor;
}

#endif // ARITHMETIC_OPERATIONS_H
