#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");
    
    // 1
    int a, sum{ 0 };
    cout << "1)\nВведите число: ";
    cin >> a;
    for (a; a <= 500; a++) {
        sum += a;
    }
    cout << sum << "\n\n";

    //2
    double x, y;
    cout << "2)\nВведите два целых числа через пробел: ";
    cin >> x >> y;
    cout << pow(x, y) << "\n\n";

    //3
    int sum1000{ 0 };
    cout << "3)\n";
    for (int i = 1; i <= 1000; i++) {
        sum1000 += i;
    }
    cout << sum1000 << "\n\n";
    
    //4
    int a4, prod{ 1 };
    cout << "4)\nВведите число: ";
    cin >> a4;
    for (a4; a4 <= 20; a4++) {
        prod *= a4;
    }
    cout << prod << "\n\n";
    
    //5
    int k;
    cout << "5)\nВведите число: ";
    cin >> k;
    for (int i = 1; i <= 10; i++) {
        cout << k << " * " << i << " = " << k * i << "\n";
    }

    return(0);
}
