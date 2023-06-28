#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");

    // 1
    int num{}, result{ 0 }, lenght{ 0 }, option{};
    double average{ 0 };
    cout << "1)\nВведите число: ";
    cin >> num;
    int n = num;

    do {
        ++lenght;
        n /= 10;
    } while (n);

    while (true) {
        cout << "Выберите вариант действия:\n1 - Определить количество цифр\n2 - Посчитать их сумму"
            "\n3 - Посчитать их среднее арифметическое\n4 - Определить количество нулей\n5 - Следующее задание\n";
        cin >> option;

        if (option == 5) {
            break;
        }

        switch (option) {
        case 1:
            cout << "Количество цифр: " << lenght << "\n";
            break;
        case 2:
            for (int i = 0; i < lenght; i++) {
                result += ((int)(num / pow(10, i)) % 10);
            }
            cout << "Сумма цифр: " << result << "\n";
            result = 0;
            break;
        case 3:
            for (int i = 0; i < lenght; i++) {
                result += ((int)(num / pow(10, i)) % 10);
            }
            average = (double)result / lenght;
            cout << "Среднее арифметическое цифр: " << average << "\n";
            result = 0;
            average = 0;
            break;
        case 4:
            for (int i = 0; i < lenght; i++) {
                if (((int)(num / pow(10, i)) % 10) == 0) result++;
            }
            cout << "Количество нулей: " << result << "\n";
            result = 0;
            break;
        default:
            cout << "Неверный вариант" << "\n";
            break;
        }
        cout << "\n";
    }
    cout << "\n";

    // 2
    int len{};
    cout << "2)\nВведите размер клетки: ";
    cin >> len;

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (i % 2 != 0) {
                for (int l = 1; l <= len; l++) {
                    if (j % 2 != 0) cout << "_";
                    else cout << "#";
                }
                cout << " ";
            }
            else {
                for (int l = 1; l <= len; l++) {
                    if (j % 2 == 0) cout << "_";
                    else cout << "#";
                }
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // 3
    float milk{ 40.5 }, bread{ 15 }, chocolate{ 35.7 }, water{ 17 };
    double sum, sumTotal{ 0 };
    int customers, quantity, productNumber;
    cout << "3)\nВведите количество покупателей: ";
    cin >> customers;
    for (int i = 1; i <= customers; i++) {
        sum = 0;
        cout << "Покупатель №" << i << "\n";
        while (true) {
            cout << "Введите номер товара:\n1. Молоко\n2. Хлеб\n3. Шоколад\n4. Вода\n5. Выйти из режима выбора товара\n";
            cin >> productNumber;
            if (productNumber == 5) break;
            cout << "Введите количество товара: ";
            cin >> quantity;
            switch (productNumber) {
            case 1:
                sum += milk * quantity;
                break;
            case 2:
                sum += bread * quantity;
                break;
            case 3:
                sum += chocolate * quantity;
                break;
            case 4:
                sum += water * quantity;
                break;
            default:
                cout << "Неверный номер товара\n";
                break;
            }
        }
        cout << ceil(sum * 100) / 100 << " гривен\n\n";
        sumTotal += sum;
    }
    cout << "Итого магазин получил " << ceil(sumTotal * 100) / 100 << " грн\n\n";

    // 4
    cout << "4)\n";

    for (int i = 0; i <= 9; i++) {
        for (int j = 65; j <= 74; j++) {
            cout << (char) j << i << " ";
        }
        cout << "\n";
    }

    return 0;

}
