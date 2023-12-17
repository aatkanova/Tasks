//2.Написать собственную функцию с аргументами 
//не возвращающую значение, которая выводит название дня недели, 
//в зависимости какое число было введено пользователем.

#include <iostream>
using namespace std;

void printDayOfWeek(int dayNumber) {
switch(dayNumber) {
case 1:
cout << "Понедельник" << endl;
break;
case 2:
cout << "Вторник" << endl;
break;
case 3:
cout << "Среда" << endl;
break;
case 4:
cout << "Четверг" << endl;
break;
case 5:
cout << "Пятница" << endl;
break;
case 6:
cout << "Суббота" << endl;
break;
case 7:
cout << "Воскресенье" << endl;
break;
default:
cout << "Ошибка: неверный номер дня" << endl;
}
}

int main() {
int dayNumber;
cout << "Введите номер дня (от 1 до 7): ";
cin >> dayNumber;

printDayOfWeek(dayNumber);

return 0;
}