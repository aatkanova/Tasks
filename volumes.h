//8.Написать три функции (объемы геометрических тел) для 
//геометрических расчетов и оформить их в отдельном файле.
#ifndef VOLUMES_H
#define VOLUMES_H

#include <cmath>

const double PI = 3.14159;

// Функция для вычисления объема куба
double cubeVolume(double sideLength) {
    return pow(sideLength, 3);
}

// Функция для вычисления объема сферы
double sphereVolume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

// Функция для вычисления объема цилиндра
double cylinderVolume(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

#endif // VOLUMES_H
