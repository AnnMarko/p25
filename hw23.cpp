#include <iostream>


using namespace std;


void Init(int* m, int size) {
    for (int i = 0; i < size; i++) {
        *(m + i) = rand() % 20 + 1;
    }
}


void ShowElements(int* m, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(m + i) << "\t";
    }
    cout << "\n";
}


void Copy(int* oldArray, int* newArray, int size) {
    for (int i = 0; i < size; i++) {
        *(newArray + i) = *(oldArray + i);
    }
}


void Reverse(int* m, int size) {
    int* start = m;
    int* end = m + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


void ReverseCopy(int* oldArray, int* newArray, int size) {
    for (int i = 0; i < size; i++) {
        *(newArray + i) = *(oldArray + size - 1 - i);
    }
}


void TwoResultint(int* array, int size, int* sum, int* mult) {
    *sum = 0;
    *mult = 1;
    for (int i = 0; i < size; i++) {
        *sum += *(array + i);
        *mult *= *(array + i);
    }
}


void PositiveNegativeZero(int* array, int size, int* pos, int* neg, int* zero) {
    *pos = 0;
    *neg = 0;
    *zero = 0;
    for (int i = 0; i < size; i++) {
        if (*(array + i) > 0) *pos = *pos + 1;
        else if (*(array + i) < 0) *neg = *neg + 1;
        else *zero = *zero + 1;
    }
}


void MaxElement(int* array, int size, int* max, int* maxi) {
    *max = *(array);
    *maxi = 0;
    for (int i = 1; i < size; i++) {
        if (*(array + i) > *max) {
            *max = *(array + i);
            *maxi = i;
        }
    }
}


int main() {
    setlocale(0, "RUS");
    srand(time(0));

    // 1
    cout << "1)\n";

    const int size = 5;
    int array1[size];
    int array2[size];

    Init(array1, size);

    Copy(array1, array2, size);

    cout << "Первый массив:\n";
    ShowElements(array1, size);

    cout << "Второй массив:\n";
    ShowElements(array2, size);

    // 2
    cout << "2)\n";

    cout << "Массив до изменения порядка:\n";
    ShowElements(array1, size);

    Reverse(array1, size);

    cout << "Массив после изменения порядка:\n";
    ShowElements(array1, size);

    // 3
    cout << "3)\n";

    ReverseCopy(array1, array2, size);

    cout << "Первый массив:\n";
    ShowElements(array1, size);

    cout << "Второй массив:\n";
    ShowElements(array2, size);

    // 4
    cout << "4)\n";

    int sum, mult;

    cout << "Массив:\n";
    ShowElements(array1, size);

    TwoResultint(array1, size, &sum, &mult);
    cout << "Сумма элементов = " << sum << '\n';
    cout << "Произведение элементов = " << mult << '\n';

    // 5
    cout << "5)\n";

    int pos, neg, zero;

    cout << "Массив:\n";
    ShowElements(array1, size);

    PositiveNegativeZero(array1, size, &pos, &neg, &zero);
    cout << "Положительных элементов: " << pos << '\n';
    cout << "Негативных элементов: " << neg << '\n';
    cout << "Нулей: " << zero << '\n';

    // 6
    cout << "6)\n";

    int max, maxi;

    cout << "Массив:\n";
    ShowElements(array1, size);

    MaxElement(array1, size, &max, &maxi);
    cout << "Максимальный элемент " << max << " с индексом " << maxi << '\n';

  
    return 0;
}
