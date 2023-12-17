//13.Написать три функции для нахождения произведения, суммы, 
//среднегеометрического значения первых k-натуральных чисел.

//2. Функция для нахождения суммы первых k натуральных чисел:

#include <iostream>
using namespace std;

unsigned long long calculateSum(int k) {
unsigned long long sum = 0;
for (int i = 1; i <= k; ++i) {
sum += i;
}
return sum;
}

int main() {
int k;
cout << "Введите количество натуральных чисел (k): ";
cin >> k;

unsigned long long sum = calculateSum(k);
cout << "Сумма первых " << k << " натуральных чисел: " << sum << endl;

return 0;
}
