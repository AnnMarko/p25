#include <iostream>

using namespace std;


double power(double base, int exponent);
int rangeSum(int start, int end);
bool isPerfect(int num);
void printCard(int rank, int suit);
bool isLucky(int num);
int search(int arr[], int lenght, int key);
int binarySearch(int arr[], int lenght, int key);
int binaryToDecimal(string binary, int lenght);


int main() {

    setlocale(0, "RUS");

    // 1

    double base, resultDouble;
    int exponent;

    cout << "1)\nВведите основание и показатель степени через пробел: ";
    cin >> base >> exponent;

    resultDouble = power(base, exponent);

    cout << "Результат: " << resultDouble << "\n\n";

    // 2

    int num1, num2, resultInt;

    cout << "2)\nВведите два числа через пробел: ";
    cin >> num1 >> num2;

    resultInt = rangeSum(num1, num2);

    cout << "Результат: " << resultInt << "\n\n";

    // 3

    int start, end;

    cout << "3)\nВведите начало и конец интервала: ";
    cin >> start >> end;

    cout << "Совершенные числа:\n";
    if (start > end) swap(start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << "\n\n";

    // 4

    int rank, suit;

    cout << "4)\nВведите ранг карты (1-9): ";
    cin >> rank;
    cout << "Введите масть карты цифрой (1 - Бубны, 2 - Черви, 3 - Крести, 4 - Пики): ";
    cin >> suit;

    printCard(rank, suit);

    // 5

    int num;

    cout << "5)\nВведите число: ";
    cin >> num;

    if (isLucky(num)) {
        cout << "Это счастливое число!" << "\n\n";
    }
    else {
        cout << "Это не счастливое число" << "\n\n";
    }

    // 1

    srand(time(0));
    const int lenght = 10;
    int array[lenght], key, index;

    cout << "1)\n";

    for (int i = 0; i < lenght; i++) {
        array[i] = rand() % 100 + 1; // числа от 1 до 100
        cout << array[i] << " ";
    }

    cout << "Введите ключ, который нужно найти : ";
    cin >> key;

    index = search(array, lenght, key);

    if (index == -1) cout << "Ключ не найден" << "\n\n";
    else cout << "Ключ найден под индексом " << index << "\n\n";

    // 2

    cout << "2)\n";

    for (int i = 0; i < lenght; i++) {
        array[i] = rand() % 100 + 1; // числа от 1 до 100
        cout << array[i] << " ";
    }

    cout << "Введите ключ, который нужно найти : ";
    cin >> key;

    index = binarySearch(array, lenght, key);

    if (index == -1) cout << "Ключ не найден" << "\n\n";
    else cout << "Ключ найден под индексом " << index << "\n\n";

    // 3

    string binary;
    int len, decimal;

    cout << "2)\n";

    cout << "Введите длину бинарного числа: ";
    cin >> len;

    cout << "Введите бинарное число: ";
    cin >> binary;
    
    decimal = binaryToDecimal(binary, len);
    cout << "Десятичное число: " << decimal << "\n\n";


    return 0;
}

double power(double base, int exponent) {
    double result{ 1 };

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int rangeSum(int start, int end) {
    int sum = 0;

    if (start > end) swap(start, end);
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void printCard(int rank, int suit) {
    cout << "-------------\n";
    cout << "|" << rank << "          |\n";
    switch (suit) {
    case 1:
        cout << "|           |\n";
        cout << "|     #     |\n";
        cout << "|    ###    |\n";
        cout << "|   #####   |\n";
        cout << "|    ###    |\n";
        cout << "|     #     |\n";
        cout << "|           |\n";
        break;
    case 2:
        cout << "|           |\n";
        cout << "|   ## ##   |\n";
        cout << "|  #######  |\n";
        cout << "|   #####   |\n";
        cout << "|    ###    |\n";
        cout << "|     #     |\n";
        cout << "|           |\n";
        break;
    case 3:
        cout << "|           |\n";
        cout << "|     #     |\n";
        cout << "|  # ### #  |\n";
        cout << "| ######### |\n";
        cout << "|  #  #  #  |\n";
        cout << "|     #     |\n";
        cout << "|           |\n";
        break;
    case 4:
        cout << "|           |\n";
        cout << "|     #     |\n";
        cout << "|   #####   |\n";
        cout << "|  #######  |\n";
        cout << "|  ## # ##  |\n";
        cout << "|     #     |\n";
        cout << "|           |\n";
        break;
    }
    cout << "|          " << rank << "|\n";
    cout << "-------------\n\n";

}

bool isLucky(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum == 21; // Число является счастливым, если сумма его цифр равна 21
}

int search(int arr[], int lenght, int key) {
    for (int i = 0; i < lenght; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int lenght, int key) {
    int left = 0;
    int right = lenght - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            left = mid + 1; // правая половина
        }
        else {
            right = mid - 1; // левая половина
        }
    }

    return -1;
}

int binaryToDecimal(string binary, int lenght) {
    int k = 1;
    int decimal = 0;
    for (int i = lenght - 1; i >= 0; i--) {
        int digit = binary[i] - '0';
        decimal += digit * k;
        k *= 2;
    }

    return decimal;
}
