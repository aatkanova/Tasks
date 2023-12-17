//1.Написать собственную функцию с аргументами не возвращающую значение, 
//для расчета площади и длины окружности.

#include <iostream>
using namespace std;

void calculateCircle(float radius) {
const float PI = 3.14159;

float area = PI * radius * radius;
float circumference = 2 * PI * radius;

cout << "Площадь окружности: " << area << endl;
cout << "Длина окружности: " << circumference << endl;
}

int main() {
float radius;
cout << "Введите радиус окружности: ";
cin >> radius;

calculateCircle(radius);

return 0;
}


