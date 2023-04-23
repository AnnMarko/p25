#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    // 1 
    double num1_1, num2_1, num3_1;
    cout << "1)\nВведите три вещественных числа через пробел: ";
    cin >> num1_1 >> num2_1 >> num3_1;
    cout << (num1_1 + num2_1 + num3_1) / 3 << "\n\n";
    //2
    double numa_2, numb_2;
    cout << "2)\nax + b = 0\nВведите значения для a и b через пробел: ";
    cin >> numa_2 >> numb_2;
    cout << "x = " << -numb_2 / numa_2 << "\n\n";
    //3
    double numnum_3;
    int numpow_3;
    cout << "3)\nВведите число и степень через пробел: ";
    cin >> numnum_3 >> numpow_3;
    cout << pow(numnum_3, numpow_3) << "\n\n";
    //4
    const double PI = 3.14159265359;
    double numrad_4;
    cout << "4)\nВведите радиус окружности: ";
    cin >> numrad_4;
    cout << "Длина: " << 2 * PI * numrad_4 << "\n";
    cout << "Площадь: " << PI * pow(numrad_4, 2) << "\n\n";
    //5
    const double USD = 0.027, EUR = 0.025, BTC = 0.00000093;
    double numUAH_5;
    cout << "5)\nВведите количество гривен: ";
    cin >> numUAH_5;
    cout << "USD: " << numUAH_5 * USD << "\n";
    cout << "EUR: " << numUAH_5 * EUR << "\n";
    cout << "BTC: " << numUAH_5 * BTC << "\n\n";
    //6
    const double LAND_MILE = 1.60934, NAUTICAL_MILE = 1.852;
    double numkm_6;
    cout << "6)\nВведите количество километров: ";
    cin >> numkm_6;
    cout << "Сухопутных миль: " << numkm_6 * LAND_MILE << "\n";
    cout << "Морских миль: " << numkm_6 * NAUTICAL_MILE << "\n\n";
    //7
    double n_7, p_7;
    cout << "7)\nВведите число и процент через пробел: ";
    cin >> n_7 >> p_7;
    cout << n_7 / 100 * p_7 << "\n\n";
    //8
    double celsius, fahrenheit, kelvin, reaumur, delille;
    cout << "8)\nВведите температуру в градусах Цельсия: ";
    cin >> celsius;
    fahrenheit = celsius * 1.8 + 32;
    kelvin = celsius + 273.15;
    reaumur = celsius * 0.8;
    delille = celsius * 1.5 - 100;
    cout << "По шкале Фаренгейта: " << fahrenheit << "\n";
    cout << "По шкале Кельвина: " << kelvin << "\n";
    cout << "По шкале Реомюра: " << reaumur << "\n";
    cout << "По шкале Делиля: " << delille << "\n";
    cout << "Из Фаренгейта в Цельсия: " << (fahrenheit - 32) / 1.8 << "\n\n";
    //9
    double a, b;
    cout << "9)\nВведите значения для a и b через пробел: ";
    cin >> a >> b;
    cout << a << " " << b << "\n";
    // 9.1
    double c = 0;
    c = a; a = b; b = c;
    cout << a << " " << b << "\n\n";
    // 9.2
    b = a; a = c; c = 0; // Вернуть исходные значения
    cout << a << " " << b << "\n";
    swap(a, b);
    cout << a << " " << b << "\n";
}
