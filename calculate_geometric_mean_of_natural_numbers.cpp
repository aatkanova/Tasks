//13.Написать три функции для нахождения произведения, суммы, 
//среднегеометрического значения первых k-натуральных чисел.

//3. Функция для нахождения среднего геометрического значения первых k натуральных чисел:


#include <iostream>
#include <cmath>
using namespace std;

double calculateGeometricMean(int k) {
double product = 1.0;
for (int i = 1; i <= k; ++i) {
product *= i;
}
return pow(product, 1.0 / k);
}

int main() {
int k;
cout << "Введите количество натуральных чисел (k): ";
cin >> k;

double geometricMean = calculateGeometricMean(k);
cout << "Среднее геометрическое первых " << k << " натуральных чисел: " << geometricMean << endl;

return 0;
}

