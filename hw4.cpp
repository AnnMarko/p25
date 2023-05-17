#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    
    // 1
    double size_1{}, speed_1{};
    cout << "1)\nВведите размер фильма (ГБ) и скорость интернета (МегаБит/с) через пробел: ";
    cin >> size_1 >> speed_1;
    double time_1{ (size_1 * 8000) / speed_1 };
    int hours_1 = time_1 / 3600; time_1 -= hours_1 * 3600;
    int minutes_1 = time_1 / 60; time_1 -= minutes_1 * 60;
    int seconds_1 = ceil(time_1);
    cout << "Требуется времени: " << hours_1 << " часов " << minutes_1 << " минут " << seconds_1 << " секунд\n\n";
    
    //2
    int flash_2{}, film_2{ 760 };
    cout << "2)\nВведите размер флешки в ГБ: ";
    cin >> flash_2;
    flash_2 *= 1000;
    cout << "На ней поместится " << (int)(flash_2/ film_2) << " фильмов размером 760 Мегабайт\n\n";

    //3
    double num_3{};
    cout << "3)\nВведите число: ";
    cin >> num_3;
    cout << round(num_3 * 100) / 100 << "\n\n";

    //4
    int students_4{}, badStudents_4{};
    cout << "4)\nКоличество студентов и должников через пробел: ";
    cin >> students_4 >> badStudents_4;
    float badStudentsPercent_4 = 100.0f / students_4 * badStudents_4;
    cout << round(badStudentsPercent_4 * 10) / 10 << "% должников\n\n";

    //5
    int secondsPast_5{}, secondsLeft_5{}, minutesLeft_5{}, hoursLeft_5{}, secondsTotal_5{ 86400 };
    cout << "5)\nВведите количество прошедших секунд: ";
    cin >> secondsPast_5;
    secondsLeft_5 = secondsTotal_5 - secondsPast_5;
    hoursLeft_5 = secondsLeft_5 / 3600;
    minutesLeft_5 = secondsLeft_5 / 60;
    cout << "Осталось по отдельности:\n";
    cout << hoursLeft_5 << " часов\n";
    cout << minutesLeft_5 << " минут\n";
    cout << secondsLeft_5 << " секунд\n\n";

    //6
    double s{}, p{}, d{};
    cout << "6)\nВведите сумму вклада (грн), срок (месяцы) и процент (годовой) через пробел: ";
    cin >> s >> d >> p;
    p *= 0.01;
    double result = s + (s * p * (d/12));
    cout << "Вы получите " << result << " грн\n\n";

    //7
    const double PI = 3.141592653589793238462643383279502884;
    double equatorialRadius_7, polarRadius_7;
    cout << "7)\nВведите экваториальный (км) и полярный радиус Земли (км) через пробел: ";
    cin >> equatorialRadius_7 >> polarRadius_7;
    double surfaceArea_7 = 4 * PI * ((equatorialRadius_7 * equatorialRadius_7 + polarRadius_7 * polarRadius_7) / 2);
    cout << "Площадь поверхности Земли составляет: " << surfaceArea_7 << " квадратных километров\n";

}
