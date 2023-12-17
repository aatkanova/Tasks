//9.Написать три функции (степень, обмен значений, сумма чисел) для арифметических 
//расчетов и оформить их в отдельном файле.

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

// Функция для возведения числа в степень
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Функция для обмена значений двух переменных
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Функция для вычисления суммы чисел от 1 до n
int sumNumbers(int n) {
    return (n * (n + 1)) / 2;
}

#endif 