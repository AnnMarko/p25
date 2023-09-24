#include <iostream>


using namespace std;


template <class T>
void selectSort(T a[], int size) {
    int firstI = -1, secondI = -1;



    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            firstI = i;
            break;
        }
    }



    for (int i = size - 1; i > firstI; i--) {
        if (a[i] < 0) {
            secondI = i;
            break;
        }
    }
    
    if (firstI == -1 || secondI == -1) {
        cout << "В массиве недостаточно отрицательных чисел\n\n";
        return;
    }



    int i, j, k;
    T x;
    for (i = firstI + 1; i < secondI; i++) {
        k = i;
        x = a[i];
        for (j = i + 1; j < secondI; j++) {
            if (a[j] > x) {
                k = j;
                x = a[j];
            }
        }
        if (k != i) {
            a[k] = a[i];
            a[i] = x;
        }
    }
}

void random(int ar[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
}

int findIndex(int ar[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (ar[i] == key) return i;
    }
    return -1;
}

void sort(int ar[], int size, int index) {
    int x, k;

    for (int i = 0; i < index; i++) {
        k = i;
        x = ar[i];
        for (int j = i + 1; j < index; j++) {
            if (ar[j] > x) {
                k = j;
                x = ar[j];
            }
        }
        if (k != i) {
            ar[k] = ar[i];
            ar[i] = x;
        }
    }

    for (int i = index + 1; i < size; i++) {
        k = i;
        x = ar[i];
        for (int j = i + 1; j < size; j++) {
            if (ar[j] < x) {
                k = j;
                x = ar[j];
            }
        }
        if (k != i) {
            ar[k] = ar[i];
            ar[i] = x;
        }
    }
}


int main() {

    setlocale(0, "RUS");
    srand(time(0));
    
    // 1
    const int SIZE = 10;
    int array[SIZE];
    cout << "1)\n";

    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 41 - 20; // числа от -20 до 20
        cout << array[i] << " ";
    }
    cout << "\n";

    selectSort(array, SIZE);

    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }

    cout << "\n\n";

    //2

    cout << "2)\n";

    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 20 + 1; // числа от 1 до 20
        cout << array[i] << " ";
    }

    random(array, SIZE);

    cout << "\n";

    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }

    cout << "\n";

    int randomNumber = rand() % 20 + 1;

    cout << "Рандомная позиция: " << randomNumber << "\n";

    int indexRandom = findIndex(array, SIZE, randomNumber);

    if (indexRandom == -1) {
        cout << "Позиция не найдена в массиве\n";
    }
    else {
        sort(array, SIZE, indexRandom);
        for (int i = 0; i < SIZE; i++) {
            cout << array[i] << " ";
        }

        cout << "\n";
    }



    return 0;
}
