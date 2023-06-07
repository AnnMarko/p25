#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    
    // 1
    double firstX, firstY, secondX, secondY;
    cout << "1)\nВведите координаты двух разных точек через пробел: ";
    cin >> firstX >> firstY >> secondX >> secondY;
    if (firstX == secondX) {
        cout << "Прямая параллельна оси y";
    }
    else if (firstY == secondY) {
        cout << "Прямая параллельна оси x";
    }
    else {
        cout << "Прямая не параллельна ни одной оси";
    }
    cout << "\n\n";

    //2
    double number;
    cout << "2)\nВведите число: ";
    cin >> number;
    if (number == (int)number) {
        cout << "Число не имеет вещественную часть";
    }
    else {
        cout << "Число имеет вещественную часть";
    }
    cout << "\n\n";

    //3
    int hours, minutes, seconds;
    cout << "3)\nВведите время: ";
    cin >> hours >> minutes >> seconds;
    if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59) {
        cout << "Время корректное";
    }
    else {
        cout << "Время некорректное";
    }
    cout << "\n\n";
    
    //4
    int numberTrolleybus, firstSum, secondSum;
    do {
        cout << "4)\nВведите номер билета: ";
        cin >> numberTrolleybus;
    } while (numberTrolleybus < 0 && numberTrolleybus > 999999);

    firstSum = (numberTrolleybus / 100000 + numberTrolleybus / 10000 % 10 + numberTrolleybus / 1000 % 10);
    secondSum = (numberTrolleybus / 100 % 10 + numberTrolleybus / 10 % 10 + numberTrolleybus % 10);

    if (firstSum == secondSum) {
        cout << "Счастливый билет!!";
    }
    else {
        cout << "Обычный билет";
    }
    cout << "\n\n";
    
    //5
    int day, month, year;
    cout << "Введите дату через пробел (день месяц год): ";
    cin >> day >> month >> year;
    if (month > 0 && month <= 12) {
        if (month == 2) {
            if (year % 4 == 0) {
                if (day > 0 && day <= 29) {
                    cout << "эта дата корректная\nзавтра будет ";
                    if (day < 29) {
                        day++;
                    }
                    else {
                        day = 1;
                        if (month < 12) {
                            month++;
                        }
                        else {
                            month = 1;
                            year++;
                        }
                    }
                    cout << day << " " << month << " " << year;
                }
                else {
                    cout << "эта дата НЕ корректная";
                    exit(0);
                }
            }
            else {
                if (day > 0 && day <= 28) {
                    cout << "эта дата корректная\nзавтра будет ";
                    if (day < 28) {
                        day++;
                    }
                    else {
                        day = 1;
                        if (month < 12) {
                            month++;
                        }
                        else {
                            month = 1;
                            year++;
                        }
                    }
                    cout << day << " " << month << " " << year;
                }
                else {
                    cout << "эта дата НЕ корректная";
                    exit(0);
                }
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 0 && day <= 31) {
                cout << "эта дата корректная\nзавтра будет ";
                if (day < 31) {
                    day++;
                }
                else {
                    day = 1;
                    if (month < 12) {
                        month++;
                    }
                    else {
                        month = 1;
                        year++;
                    }
                }
                cout << day << " " << month << " " << year;
            }
            else {
                cout << "эта дата НЕ корректная";
                exit(0);
            }
        }
        else {
            if (day > 0 && day <= 30) {
                cout << "эта дата корректная\nзавтра будет ";
                if (day < 30) {
                    day++;
                }
                else {
                    day = 1;
                    if (month < 12) {
                        month++;
                    }
                    else {
                        month = 1;
                        year++;
                    }
                }
                cout << day << " " << month << " " << year;
            }
            else {
                cout << "эта дата НЕ корректная";
                exit(0);
            }
        }
    }
    else {
        cout << "эта дата НЕ корректная";
        exit(0);
    }

}
