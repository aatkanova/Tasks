//7. Написать собственную функцию, с аргументами возвращающую значение, для нахождения 
//количества делителей введенного числа. Функцию оформить как отдельный файл.
// Файл divisors_counter.h
#ifndef DIVISORS_COUNTER_H
#define DIVISORS_COUNTER_H

#include <iostream>

// Функция для подсчета количества делителей числа
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

#endif // DIVISORS_COUNTER_H

