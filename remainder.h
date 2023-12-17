//5.Написать собственную функцию, с аргументами возвращающую значения, для нахождения 
//остатка от деления двух целых чисел. 
#ifndef REMAINDER_H
#define REMAINDER_H

// Функция для нахождения остатка от деления двух целых чисел
int findRemainder(int dividend, int divisor) {
    if (divisor == 0) {
        std::cerr << "Ошибка: Деление на ноль!" << std::endl;
        return -1; // Возврат значения -1 в случае ошибки
    }

    return dividend % divisor;
}

#endif // REMAINDER_H