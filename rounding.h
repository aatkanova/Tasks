//10.Написать три функции для округления чисел (по правилам, к меньшему целому, к большему целому) 
//и оформить их в отдельном файле.

#ifndef ROUNDING_H
#define ROUNDING_H

#include <cmath>

// Функция для округления числа по математическим правилам (до ближайшего целого)
double roundToNearest(double number) {
    return round(number);
}

// Функция для округления числа в меньшую сторону
double roundDown(double number) {
    return floor(number);
}

// Функция для округления числа в большую сторону
double roundUp(double number) {
    return ceil(number);
}

#endif