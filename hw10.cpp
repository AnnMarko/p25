#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    
    // 1
    int countSame{ 0 }, countDif{ 0 };
    cout << "1)\n";
    for (int i = 100; i <= 999; i++) {
        if ((i / 100) == (i / 10 % 10) || (i / 100) == (i % 10) || (i / 10 % 10) == (i % 10)) {
            countSame += 1;
        }
        else {
            countDif += 1;
        }

    }
    cout << countSame << "\n\n";

    //2
    cout << "2)\n";
    cout << countDif << "\n\n";

    //3
    int number, result;
    string resultString, numberString;
    cout << "3) Введите число: ";
    cin >> number;
    numberString = to_string(number);

    for (char i : numberString) {
        if (i != '3' && i != '6') {
            resultString += i;
        }
    }

    result = stoi(resultString);
    cout << result << "\n\n";
    
    //4
    int a;
    cout << "4)\nВведите число: ";
    cin >> a;
    for (int b = 1; b <= a; b++) {
        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
            cout << b << "\n";
        }
    }
    cout << "\n";
    
    //5
    int A, sum{ 0 };
    cout << "5)\nВведите число: ";
    cin >> A;
    int tempA = A;
    
    while (tempA != 0) {
        sum += tempA % 10;
        tempA /= 10;
    }
    if (sum * sum * sum == A * A) cout << "Куб суммы цифр равен А * А\n\n";
    else cout << "Куб суммы цифр не равен А * А\n\n";

    //6
    int num;
    cout << "6)\nВведите число: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << "\n";
        }
    }
    cout << "\n";

    //7
    int numFirst, numSecond;
    cout << "7)\nВведите два числа через пробел: ";
    cin >> numFirst >> numSecond;
    for (int i = 1; i <= max(numFirst, numSecond); i++) {
        if (numFirst % i == 0 && numSecond % i == 0) {
            cout << i << "\n";
        }
    }

    return(0);

}
