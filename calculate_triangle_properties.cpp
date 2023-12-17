//6.Написать собственную функцию, с аргументами не возвращающую 
//значения, для нахождения гипотенузы и площади прямоугольного треугольника.

#include <iostream>
#include <cmath>
using namespace std;

void calculateTriangleProperties(float side1, float side2) {
float hypotenuse = sqrt(side1 * side1 + side2 * side2);
float area = 0.5 * side1 * side2;

cout << "Гипотенуза: " << hypotenuse << endl;
cout << "Площадь треугольника: " << area << endl;
}

int main() {
float sideA, sideB;
cout << "Введите длину первого катета: ";
cin >> sideA;
cout << "Введите длину второго катета: ";
cin >> sideB;

calculateTriangleProperties(sideA, sideB);

return 0;
}