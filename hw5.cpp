#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    
    // 1
    int num1{ 0 }, num2{ 0 }, temp1{ 0 }, temp2{ 0 };
    cout << "1)\nВведите два трёхзначных числа через пробел: ";
    cin >> num1 >> num2;
    temp1 = num1;
    temp1 = num1 / 10 % 10 * 10;
    num1 -= temp1;
    temp2 = num2 / 10 % 10 * 10;
    num2 -= temp2;
    num1 += temp2;
    num2 += temp1;
    cout << num1 << " " << num2 << "\n\n";

    //2
    int numberFour{ 0 }, sumOneThree{ 0 }, difTwoFour{ 0 };
    cout << "2)\nВведите четырёхзначное число: ";
    cin >> numberFour;
    sumOneThree = (numberFour % 10) + (numberFour / 100 % 10);
    difTwoFour = (numberFour / 10 % 10) - (numberFour / 1000);
    cout << "Сумма 1 и 3 цифр: " << sumOneThree << "\nРазность 2 и 4 цифр: " << difTwoFour << "\n\n";

    //3
    int numberThree{ 0 }, numberModified{ 0 };
    cout << "3)\nВведите трёхзначное число: ";
    cin >> numberThree;
    numberModified = (numberThree / 100 * 10) + (numberThree % 10);
    cout << numberModified << "\n\n";

    //4
    double initialAmount{ 0 };
    double interestRate{ 0 };
    double monthlyPayment{ 0 };
    cout << "4)\nВведите сумму денежнго вклада и процент годовых через пробел: ";
    cin >> initialAmount >> interestRate;
    monthlyPayment = initialAmount * (interestRate / 100) / 12;
    cout << monthlyPayment << " гривен ежемесячно\n\n";

    //5
    int y{ 0 }, x{ 0 }, quantityOfY{ 0 }, change{ 0 };
    cout << "5)\nВведите цену товара и количество гривен через пробел: ";
    cin >> y >> x;
    quantityOfY = x / y;
    change = x % y;
    cout << quantityOfY << " товаров\n";
    cout << "Сдача: " << change << " грн\n\n";

    //6
    const float POUND{ 405.9 };
    double kilos{ 0 }, pounds{ 0 };
    cout << "6)\nВведите количество килограмм: ";
    cin >> kilos;
    pounds = kilos * POUND / 1000;
    kilos = pounds / POUND * 1000;
    cout << "Фунтов: " << pounds << "\n";
    cout << "Килограмм: " << kilos << "\n\n";

    //7
    double length{ 0 }, width{ 0 }, height{ 0 }, n{ 0 }, m{ 0 }, r{ 0 }, volume{ 0 }, amount{ 0 };
    cout << "7)\nВведите длину, ширину, высоту комнаты, количество краски на 1м2, процент поверхности, занятый окнами и дверями, цену краски через пробел: ";
    cin >> length >> width >> height >> n >> m >> r;
    volume = (length * height * 2) + (width * height * 2);
    volume -= volume / 100 * m;
    volume *= n;
    amount = r * volume;
    cout << "Понадобится " << volume << " литров краски\n";
    cout << "Стоимость: " << amount << " грн\n\n";

    //8
    int numberFive{ 0 }, temp{ 0 };
    cout << "8)\nВведите пятизначное число: ";
    cin >> numberFive;
    temp = numberFive % 100 * 1000;
    numberFive /= 100;
    numberFive += temp;
    cout << numberFive << "\n\n";

    //9
    const double MERCURY = 3.285e23;
    const double VENUS = 4.867e24;
    const double EARTH = 5.972e24;
    const double MARS = 6.39e23;
    const double JUPITER = 1.898e27;
    const double SATURN = 5.683e26;
    const double URANUS = 8.681e25;
    const double NEPTUNE = 1.024e26;
    double totalMass{ 0 }, averageMass{ 0 }, maxPlanet{ 0 };
    totalMass = MERCURY + VENUS + EARTH + MARS + JUPITER + SATURN + URANUS + NEPTUNE;
    averageMass = totalMass / 8;
    maxPlanet = max(max(max(MERCURY, VENUS), max(EARTH, MARS)), max(max(JUPITER, SATURN), max(URANUS, NEPTUNE)));

    cout << "9)\nОбщая масса планет: " << totalMass << " кг\n";
    cout << "Средняя масса планет: " << averageMass << " кг\n";
    cout << "Масса Меркурия составляет " << 100 / totalMass * MERCURY << "% от общей массы всех планет\n";
    cout << "Масса Венеры составляет " << 100 / totalMass * VENUS << "% от общей массы всех планет\n";
    cout << "Масса Земли составляет " << 100 / totalMass * EARTH << "% от общей массы всех планет\n";
    cout << "Масса Марса составляет " << 100 / totalMass * MARS << "% от общей массы всех планет\n";
    cout << "Масса Юпитера составляет " << 100 / totalMass * JUPITER << "% от общей массы всех планет\n";
    cout << "Масса Сатурна составляет " << 100 / totalMass * SATURN << "% от общей массы всех планет\n";
    cout << "Масса Урана составляет " << 100 / totalMass * URANUS << "% от общей массы всех планет\n";
    cout << "Масса Нептуна составляет " << 100 / totalMass * NEPTUNE << "% от общей массы всех планет\n";
    cout << "Масса самой большой планеты в " << maxPlanet / (totalMass - maxPlanet) << " раз больше суммы масс всех остальных планет\n";

}
