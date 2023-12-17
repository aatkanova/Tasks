//4.Написать собственную функцию, с аргументами не возвращающую 
//значение, которая проверяет, делиться ли на три без остатка число, введенное пользователем.

#include <iostream>
using namespace std;

void checkDivisibleByThree(int number) {
if (number % 3 == 0) {
cout << number << " делится на 3 без остатка" << endl;
} else {
cout << number << " не делится на 3 без остатка" << endl;
}
}

int main() {
int userNumber;
cout << "Введите число: ";
cin >> userNumber;

checkDivisibleByThree(userNumber);

return 0;
}