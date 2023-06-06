#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "RUS");
	//1
	int weekNumber;
	cout << "1)\nВведите число от 1 до 7: ";
	cin >> weekNumber;
	switch (weekNumber) {
	case 1:
		cout << "Понедельник";
		break;
	case 2:
		cout << "Вторник";
		break;
	case 3:
		cout << "Среда";
		break;
	case 4:
		cout << "Четверг";
		break;
	case 5:
		cout << "Пятница";
		break;
	case 6:
		cout << "Суббота";
		break;
	case 7:
		cout << "Воскресенье";
		break;
	default:
		cout << "Такого дня недели нет";
		exit(0);
	}
	cout << "\n\n";

	//2
	int answer;
	cout << "2)\nИгра \"О, счастливчик!\"\n#1 Самый большой город в Украине\n1. Киев\n2. Николаев\n3. Житомир\n4. Одесса\n";
	cin >> answer;
	if (answer == 1) {
		cout << "Правильно!\n\n";
	}
	else {
		cout << "Увы, нет";
		exit(0);
	}
	cout << "#2 Самая большая область в Украине\n1. Черниговская\n2. Киевская\n3. Одесская\n4. Днепропетровская\n";
	cin >> answer;
	if (answer == 3) {
		cout << "Правильно!\n\n";
	}
	else {
		cout << "Увы, нет";
		exit(0);
	}
	cout << "#3 Самая большая акула в мире\n1. Белая\n2. Китовая\n3. Лисья\n4. Тигровая\n";
	cin >> answer;
	if (answer == 2) {
		cout << "Правильно!\n\n";
	}
	else {
		cout << "Увы, нет";
		exit(0);
	}
	cout << "#4 Самая ядовитая змея в мире\n1. Тайпан\n2. Кобра\n3. Гадюка\n4. Полоз\n";
	cin >> answer;
	if (answer == 1) {
		cout << "Правильно!\n\n";
	}
	else {
		cout << "Увы, нет";
		exit(0);
	}
	cout << "#5 Самая быстрая птица в мире\n1. Орёл\n2. Стервятник\n3. Сокол\n4. Сапсан\n";
	cin >> answer;
	if (answer == 4) {
		cout << "Правильно!\n";
	}
	else {
		cout << "Увы, нет";
		exit(0);
	}
	cout << "Поздравляю! Вы победили!\n";
}
