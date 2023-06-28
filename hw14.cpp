#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");

    // 1
    int arr[8], maxElement{}, minElement{}, maxElementNum{1}, minElementNum{1};
    srand(time(0));
    cout << "1)\n";

    for (int i = 0; i <= 7; i++) {
        arr[i] = rand() % 100 + 1; // числа от 1 до 100
        cout << arr[i] << "\n";
    }

    maxElement = arr[0];
    minElement = arr[0];

    for (int i = 1; i <= 7; i++) {
        if (arr[i] > maxElement) {
            maxElementNum = i + 1;
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElementNum = i + 1;
            minElement = arr[i];
        }
    }

    cout << "Максимальное значение в " << maxElementNum << " элементе, " << maxElement << "\n";
    cout << "Минимальное значение в " << minElementNum << " элементе, " << minElement << "\n";
    cout << "\n";

    // 2
    int arra[100], start, end, value, sum{ 0 };
    cout << "2)\nВведите диапазон (начало минимум 0, конец максимум 99): ";
    cin >> start >> end;
    if (start > end) swap(start, end);
    cout << "Введите значение для сравнения: ";
    cin >> value;

    for (int i = 0; i <= 99; i++) {
        arra[i] = rand() % 100 + 1; // числа от 1 до 100
        cout << arra[i];
        cout << "\n";
    }

    for (int i = start; i <= end; i++) {
        if (arra[i] < value) sum += arra[i];
    }


    cout << "Сумма элементов, значения которых меньше указанного пользователем = " << sum << "\n\n";

    // 3
    double profitYear[12], profitMaxMonth, profitMinMonth;
    int maxMonthNumber, minMonthNumber, startMonth, endMonth;
    cout << "3)\n";

    for (int i = 1; i <= 12; i++) {
        cout << "Введите прибыль за " << i << "-й месяц: ";
        cin >> profitYear[i - 1];
        cout << "\n";
    }

    cout << "Введите промежуток (минимум 1 месяц, максимум 12 месяц): ";
    cin >> startMonth >> endMonth;
    if (startMonth > endMonth) swap(startMonth, endMonth);

    profitMaxMonth = profitYear[startMonth - 1];
    profitMinMonth = profitYear[startMonth - 1];
    maxMonthNumber = startMonth;
    minMonthNumber = startMonth;

    for (int i = startMonth; i < endMonth; i++) {
        if (profitYear[i] > profitMaxMonth) {
            maxMonthNumber = i + 1;
            profitMaxMonth = profitYear[i];
        }
        if (profitYear[i] < profitMinMonth) {
            minMonthNumber = i + 1;
            profitMinMonth = profitYear[i];
        }
    }

    cout << "Максимальная прибыль была в " << maxMonthNumber << "-й месяц, " << profitMaxMonth << "\n";
    cout << "Минимальная прибыль была в " << minMonthNumber << "-й месяц, " << profitMinMonth << "\n\n";

    // 4
    const int N = 10;
    double ar[N] = {1, 2, -3, 4, 5, 6, -7, 8, 9, 10};
    double sumNegative{ 0 }, sumBetweenNegative{ 0 }, minValue, maxValue, productEvenI{ 1 }, productBetweenMinAndMax{ 1 };
    int IminValue{ 0 }, ImaxValue{ 0 }, startNegative{}, endNegative{};

    cout << "4)\n";

    minValue = ar[0];
    maxValue = ar[0];

    for (int i = 0; i <= 9; i++) {
        if (ar[i] < 0) {
            startNegative = i;
            break;
        }
    }

    for (int i = 9; i >= 0; i--) {
        if (ar[i] < 0) {
            endNegative = i;
            break;
        }
    }

    for (int i = 0; i <= 9; i++) {
        if (ar[i] < 0) sumNegative += ar[i];
        if (ar[i] < minValue) {
            minValue = ar[i];
            IminValue = i;
        }
        if(ar[i] > maxValue) {
            maxValue = ar[i];
            ImaxValue = i;
        }
        if (i % 2 == 0) productEvenI *= ar[i];
    }

    if (startNegative > endNegative) swap(startNegative, endNegative);

    for (int i = startNegative + 1; i < endNegative; i++) {
        sumBetweenNegative += ar[i];
    }

    if (IminValue > ImaxValue) swap(IminValue, ImaxValue);

    for (int i = IminValue + 1; i < ImaxValue; i++) {
        productBetweenMinAndMax *= ar[i];
    }

    cout << "Сумма отрицательных элементов: " << sumNegative << '\n';
    cout << "Произведение элементов, находящихся между min и max элементами: " << productBetweenMinAndMax << '\n';
    cout << "Произведение элементов с четными номерами: " << productEvenI << '\n';
    cout << "Сумма элементов, находящихся между первым и последним отрицательными элементами: " << sumBetweenNegative << '\n';

}
