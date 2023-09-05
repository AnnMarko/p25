#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");

    // 1
    int arr[10], arr1[5], arr2[5], current_index{ 0 };
    srand(time(0));
    cout << "1)\n";

    for (int i = 0; i <= 9; i++) {
        arr[i] = rand() % 100 + 1; // числа от 1 до 100
        cout << arr[i] << " ";
    }

    cout << '\n';

    for (int i = 0; i <= 4; i++) {
        arr1[i] = arr[current_index];
        current_index++;
        arr2[i] = arr[current_index];
        current_index++;
    }
    
    cout << "Первый список: ";

    for (int i = 0; i <= 4; i++) {
        cout << arr1[i] << " ";
    }

    cout << '\n';

    cout << "Второй список: ";

    for (int i = 0; i <= 4; i++) {
        cout << arr2[i] << " ";
    }

    cout << "\n\n";

    // 2
    int arrSum[5];
    cout << "2)\n";

    for (int i = 0; i <= 4; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }

    cout << "Сумма каждых элементов этих двух массивов: ";

    for (int i = 0; i <= 4; i++) {
        cout << arrSum[i] << " ";
    }

    cout << "\n\n";

    // 3
    int week[7], average, sum{ 0 }, days100{ 0 };

    cout << "3)\nВведите расходы за каждый день недели через пробел: ";
    cin >> week[0] >> week[1] >> week[2] >> week[3] >> week[4] >> week[5] >> week[6];

    for (int i = 0; i <= 6; i++) {
        sum += week[i];
    }

    average = sum / 7;

    cout << "Среднее статистическое расходов: " << average << "\n";
    cout << "Всего потрачено: " << sum << "\n";
    cout << "Дни, когда расходы превысили 100 долларов:\n";

    for (int i = 0; i <= 6; i++) {
        if (week[i] > 100) {
            days100++;
            switch (i) {
            case 0:
                cout << "Понедельник ";
                break;
            case 1:
                cout << "Вторник ";
                break;
            case 2:
                cout << "Среда ";
                break;
            case 3:
                cout << "Четверг ";
                break;
            case 4:
                cout << "Пятница ";
                break;
            case 5:
                cout << "Суббота ";
                break;
            case 6:
                cout << "Воскресенье ";
                break;
            }
        }
        
    }

    cout << '\n';
    cout << "Количество дней: " << days100;
    cout << "\n\n";




    // 4
    const int numMonths{ 12 };
    double dollarToEuro[12], depositEuro, allowableAmount{ 0 }, interestEuro, interestDollar, cashAmount{ 0 };
    cout << "4)Введите курс доллара по отношению к евро за каждый месяц года через пробел: ";
    cin >> dollarToEuro[0] >> dollarToEuro[1] >> dollarToEuro[2] >> dollarToEuro[3] >> dollarToEuro[4] >> dollarToEuro[5] >> dollarToEuro[6] >> dollarToEuro[7] >> dollarToEuro[8] >> dollarToEuro[9] >> dollarToEuro[10] >> dollarToEuro[11];

    cout << "Введите сумму на депозите в евро: ";
    cin >> depositEuro;

    for (int i = 1; i <= numMonths; i++) {
        cout << "Введите начисленные проценты за месяц " << i << " в евро: ";
        cin >> interestEuro;

        interestDollar = interestEuro * dollarToEuro[i - 1];
        
        cashAmount += interestEuro;

        if (interestDollar >= 500.0) {
            allowableAmount = cashAmount * 0.5;
            cout << "В месяц " << i << " можно обналичить не более " << allowableAmount << " евро\n";
        }
        else {
            cout << "В месяц " << i << " начислено менее 500$, поэтому обналичивать нельзя\n";
        }
    }
    
    return 0;

}
