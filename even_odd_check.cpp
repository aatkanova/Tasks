//3.Написать собственную функцию с аргументами не возвращающую значение, 
//для проверки является ли число, введенное пользователем четным.

#include <iostream>
using namespace std;

void checkEven(int number) {
if (number % 2 == 0) {
cout << number << " - четное число" << endl;
} else {
cout << number << " - нечетное число" << endl;
}
}

int main() {
int userNumber;
cout << "Введите число: ";
cin >> userNumber;

checkEven(userNumber);

return 0;
}

