#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");

    // 1
    double profitList[6], profitTotal{0};
    cout << "1)\n";

    for (int i = 1; i <= 6; i++) {
            cout << "Введите прибыль за " << i << "-й месяц: ";
            cin >> profitList[i - 1];
            cout << "\n";
    }

    for (int i = 0; i <= 5; i++) {
        profitTotal += profitList[i];
    }
    cout << "Всего " << profitTotal << " гривен\n\n";
    
    // 2
    int arr[8] = {3, 4, 56, 2, 7, 8, 4, 3};
    cout << "2)\n";

    for (int i = 7; i >= 0; i--) {
        cout << arr[i] << "\n";
    }
    cout << "\n";

    // 3
    double sideList[5], perimeter{0};
    cout << "3)\n";

    for (int i = 1; i <= 5; i++) {
        cout << "Введите " << i << "-ю сторону: ";
        cin >> sideList[i - 1];
        cout << "\n";
    }

    for (int i = 0; i <= 4; i++) {
        perimeter += sideList[i];
    }

    cout << "Периметр = " << perimeter << "\n\n";

    // 4
    double profitYear[12], profitMaxMonth, profitMinMonth;
    int maxMonthNumber, minMonthNumber;
    cout << "4)\n";

    for (int i = 1; i <= 12; i++) {
        cout << "Введите прибыль за " << i << "-й месяц: ";
        cin >> profitYear[i - 1];
        cout << "\n";
    }

    profitMaxMonth = profitYear[0];
    profitMinMonth = profitYear[0];
    maxMonthNumber = 1;
    minMonthNumber = 1;

    for (int i = 1; i <= 11; i++) {
        if (profitYear[i] > profitMaxMonth) {
            maxMonthNumber = i + 1;
            profitMaxMonth = profitYear[i];
        }
        if (profitYear[i] < profitMinMonth) {
            minMonthNumber = i + 1;
            profitMinMonth = profitYear[i];
        }
    }

    cout << "Максимальная прибыль была в " << maxMonthNumber << "-й месяц" << "\n";
    cout << "Минимальная прибыль была в " << minMonthNumber << "-й месяц" << "\n";

    return 0;

}
