#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");

    // 1
    double s{}, v{}; int minute{ 60 }; int second{ 3600 };
    cout << "1)\nВведите расстояние (км) и скорость (м/с) через пробел: ";
    cin >> s >> v;
    double time{ s / (v * 3.6) };
    cout << "Потрачено времени ";
    cout << "в часах: " << time << "\n";
    cout << "\t\t  в минутах: " << time * minute << "\n";
    cout << "\t\t  в секундах: " << time * second << "\n\n";

    //2
    double num1_2{}, num2_2{};
    cout << "2)\nВведите два дробных числа через пробел: ";
    cin >> num1_2 >> num2_2;
    cout << "Сумма целых частей: " << (int)num1_2 + (int)num2_2 << "\n";
    cout << "Сумма дробных частей: " << (num1_2 - (int)num1_2) + (num2_2 - (int)num2_2) << "\n\n";

    //3
    double money{};
    cout << "3)\nВведите количество денег: ";
    cin >> money;
    cout << (int)money << " гривен " << round((money - (int)money) * 100) << " копеек\n\n";

    //5
    int seconds_5{}; int sec_in_day{ 86400 }, sec_in_hour{ 3600 }, sec_in_min{ 60 };
    cout << "5)\nВведите количество секунд: ";
    cin >> seconds_5;
    int days_5 = floor(seconds_5 / sec_in_day); seconds_5 %= sec_in_day;
    int hours_5 = floor(seconds_5 / sec_in_hour); seconds_5 %= sec_in_hour;
    int minutes_5 = floor(seconds_5 / sec_in_min); seconds_5 %= sec_in_min;
    cout << days_5 << " дней " << hours_5 << " часов " << minutes_5 <<  " минут " << seconds_5 << " секунд\n\n";

    //6
    double km_6{}, min_6{};
    cout << "6)\nВведите расстояние (км) и время (мин) через пробел: ";
    cin >> km_6 >> min_6; min_6 /= 60;
    cout << "Нужно ехать со скоростью " << km_6 / min_6 << " км/ч\n\n";

    //7
    double call_price_min{ 0.15 }; int start_hour{}, start_min{}, start_sec{}, end_hour{}, end_min{}, end_sec{};
    cout << "7)\nВведите время начала разговора (часы, минуты, секунды): ";
    cin >> start_hour >> start_min >> start_sec;
    cout << "Введите время конца разговора (часы, минуты, секунды): ";
    cin >> end_hour >> end_min >> end_sec;
    double call_duration_min = (end_hour * 60 + end_min + end_sec / 60) - (start_hour * 60 + start_min + start_sec / 60);
    double amount = call_price_min * call_duration_min;
    cout << "Стоимость разговора составляет " << amount << " гривен\n\n";

    //8
    int seconds_8{}, whole_work_hours_8{ 8 }, hours_left_8{}; double hours_8{};
    cout << "8)\nСколько прошло секунд: ";
    cin >> seconds_8; hours_8 = (double)seconds_8 / 3600;
    hours_left_8 = whole_work_hours_8 - hours_8;
    cout << "Осталось " << hours_left_8 << " целых часов\n\n";

    //9
    double price_9{}; int quant{}; double sale{};
    cout << "9)\nЦена ноутбука, количество и процент скидки через пробел: ";
    cin >> price_9 >> quant >> sale;
    price_9 -= price_9 * (sale / 100);
    cout << "Общая сумма заказа: " << price_9 * quant << " гривен\n";
}
