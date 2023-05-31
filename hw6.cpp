#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    
    // 1
    int number{ 0 };
    cout << "1)\nВведите число: ";
    cin >> number;
    cout << (number % 2 == 0 ? "чётное" : "нечётное") << "\n\n";

    //2
    double num1{ 0 }, num2{ 0 }, num3{ 0 };
    cout << "2)\nВведите три числа через пробел: ";
    cin >> num1 >> num2 >> num3;
    double numMin = min(min(num1, num2), num3);
    cout << "Наименьшее число: " << numMin << "\n\n";

    //3
    double Number{ 0 };
    cout << "3)\nВведите число: ";
    cin >> Number;
    cout << "Число ";
    if (Number == 0) cout << "= 0";
    else if (Number > 0) cout << "положительное";
    else if (Number < 0) cout << "отрицательное";
    cout << "\n\n";
   
    //4
    double firstOperand{ 0 }, secondOperand{ 0 }, result{ 0 };
    char Operator{};
    cout << "4)\nВведите пример: ";
    cin >> firstOperand >> Operator >> secondOperand;
    switch (Operator) {
    case '+':
        cout << firstOperand + secondOperand;
        break;
    case '-':
        cout << firstOperand - secondOperand;
        break;
    case '*':
        cout << firstOperand * secondOperand;
        break;
    case '/':
        if (secondOperand != 0) cout << firstOperand / secondOperand;
        else cout << "Деление на 0 невозможно";
        break;
    case '%':
        cout << (int)firstOperand % (int)secondOperand;
        break;
    default:
        cout << "Недопустимый оператор";
        break;
    }
    cout << "\n\n";
    
    //5
    char symbol{};
    cout << "5)\nВведите символ: ";
    cin >> symbol;
    if (isdigit(symbol)) cout << "цифра";
    else if (ispunct(symbol)) cout << "знак";
    else if (isalpha(symbol)) cout << "буква";
    cout << "\n\n";

    //6
    double num{ 0 }, n{ 0 }, m{ 0 };
    cout << "6)\nВведите число, начало и конец промежутка через пробел: ";
    cin >> num >> n >> m;
    cout << (num >= n && num <= m ? "Принадлежит" : "Не принадлежит") << "\n\n";

    //7
    int x{ 0 }, y{ 0 };
    cout << "7)\nВведите два числа через пробел: ";
    cin >> x >> y;
    cout << (x % y == 0 ? "Первое число кратно второму" : "Первое число не кратно второму") << "\n\n";

    //8
    int Num{ 0 };
    cout << "8)\nВведите число: ";
    cin >> Num;
    cout << "Число";
    cout << (Num % 3 == 0 && Num % 5 == 0 && Num % 7 == 0 ? "" : " не");
    cout << " кратно 3, 5 и 7\n\n";

    //9
    double numb{ 0 };
    cout << "9)\nВведите отрицательное число: ";
    cin >> numb;
    cout << abs(numb) << "\n\n";

    //10
    int numFour{ 0 };
    cout << "10)\nВведите число: ";
    cin >> numFour;
    int count{ 0 }, temp = numFour;
    if (temp == 0) count = 1;
    else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }
    if (count <= 4) cout << "Количество цифр: " << count << "\n\n";
    else cout << "Число должно содержать не больше 4 цифр" << "\n\n";

    //11
    int numFive{ 0 };
    cout << "11)\nВведите пятизначное число: ";
    cin >> numFive;
    if ((numFive % 10) == (numFive / 10000 % 10) && (numFive / 10 % 10) == (numFive / 1000 % 10)) {
        cout << "Число является палиндромом";
    }
    else cout << "Число не является палиндромом";
    cout << "\n\n";

    //12
    int recXmin{ 0 }, recYmax{ 0 }, recXmax{ 0 }, recYmin{ 0 }, dotX{ 0 }, dotY{ 0 };
    cout << "12)\nВведите координаты левого верхнего и правого нижнего углов прямоугольника, координаты точки через пробел: ";
    cin >> recXmin >> recYmax >> recXmax >> recYmin >> dotX >> dotY;
    if (dotX >= recXmin && dotX <= recXmax && dotY >= recYmin && dotY <= recYmax) {
        cout << "Точка принадлежит прямоугольнику";
    }
    else cout << "Точка не принадлежит прямоугольнику";
    cout << "\n\n";

    //13
    double first{ 0 }, second{ 0 }, third{ 0 }, fourth{ 0 };
    cout << "13)\nВведите четыре числа через пробел: ";
    cin >> first >> second >> third >> fourth;
    cout << (first == max(first, second) ? max(max(third, fourth), first) : max(max(third, fourth), second)) << "\n";

}
