//8.Написать три функции (объемы геометрических тел) для 
//геометрических расчетов и оформить их в отдельном файле.
#include <iostream>
#include "volumes.h" // Подключение заголовочного файла

int main() {
    double sideLength = 5.0;
    double radius = 3.0;
    double height = 7.0;

    // Вычисление объема куба
    double cubeVol = cubeVolume(sideLength);
    std::cout << "Объем куба: " << cubeVol << std::endl;

    // Вычисление объема сферы
    double sphereVol = sphereVolume(radius);
    std::cout << "Объем сферы: " << sphereVol << std::endl;

    // Вычисление объема цилиндра
    double cylinderVol = cylinderVolume(radius, height);
    std::cout << "Объем цилиндра: " << cylinderVol << std::endl;

    return 0;
}
