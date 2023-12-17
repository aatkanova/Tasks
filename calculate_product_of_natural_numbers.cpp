//13.Написать три функции для нахождения произведения, суммы, 
//среднегеометрического значения первых k-натуральных чисел.

//1. Функция для нахождения произведения первых k натуральных чисел:

#include <iostream>
using namespace std;

unsigned long long calculateProduct(int k) {
unsigned long long product = 1;
for (int i = 1; i <= k; ++i) {
product *= i;
}
return product;
}

int main() {
int k;
cout << "Введите количество натуральных чисел (k): ";
cin >> k;

unsigned long long product = calculateProduct(k);
cout << "Произведение первых " << k << " натуральных чисел: " << product << endl;

return 0;
}