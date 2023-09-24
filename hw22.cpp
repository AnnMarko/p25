#include <iostream>


using namespace std;




int main() {

    setlocale(0, "RUS");
    srand(time(0));
    
    // 1
    int number;
    int* numberpt = &number;
    cout << "1) Введите число: ";
    cin >> *numberpt;

    if (*numberpt < 0) cout << "Число отрицательное";
    else cout << "Число положительное";
    
    cout << "\n\n";

    //2
    int x, y;
    int* xpt = &x;
    int* ypt = &y;
    char op;
    char* oppt = &op;

    cout << "2) Введите два числа: ";
    cin >> *xpt >> *ypt;
    cout << "Введите два числа (+, -, *, /): ";
    cin >> *oppt;

    switch (*oppt)
    {
    default:
        cout << "Неверный оператор";
        break;
    case '+':
        cout << *xpt << " + " << *ypt << " = " << *xpt + *ypt;
        break;
    case '-':
        cout << *xpt << " - " << *ypt << " = " << *xpt - *ypt;
        break;
    case '*':
        cout << *xpt << " * " << *ypt << " = " << *xpt * *ypt;
        break;
    case '/':
        cout << *xpt << " / " << *ypt << " = " << *xpt / *ypt;
        break;
    }

    cout << "\n\n";

    // 3
    int a{ 6 }, b{ 9 }, c;
    int* apt = &a;
    int* bpt = &b;
    int* cpt = &c;

    cout << "3)\n";

    cout << "a = " << *apt << " b = " << *bpt << "\n";

    *cpt = *apt;
    *apt = *bpt;
    *bpt = *cpt;

    cout << "a = " << *apt << " b = " << *bpt << "\n";


    return 0;
}

