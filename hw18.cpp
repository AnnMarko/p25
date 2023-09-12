#include <iostream>

using namespace std;


bool isLeap(int year);
int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2);

double averageValue(int arr[], const int size);

void countPositiveNegativeZero(int arr[], int size, int positive, int negative, int zero);

int matrix(int matrix[][5], int matrixSize);
double matrix(double matrix[][5], int matrixSize);
char matrix(char matrix[][5], int matrixSize);

int greatestCommonDivisor(int a, int b, int b2);

void generateNumber(int secretNumber[]);
void play(int secretNumber[], int attempts, int bulls, int cows);



int main() {

    setlocale(0, "RUS");
    srand(time(0));
    
    // 1
    int day1, month1, year1, day2, month2, year2;

    cout << "1)\nВведите день, месяц и год через пробел для первой даты: ";
    cin >> day1 >> month1 >> year1;

    cout << "Введите день, месяц и год через пробел для второй даты: ";
    cin >> day2 >> month2 >> year2;

    cout << "Разница между ними составляет " << daysBetweenDates(day1, month1, year1, day2, month2, year2) << " дней";
    cout << "\n\n";

    //2
    const int size = 10;
    int array[size];
    double average;

    cout << "2)\n";

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100 + 1; // числа от 1 до 100
        cout << array[i] << " ";
    }
    cout << "\n";

    average = averageValue(array, size);

    cout << "Среднее арифметическое элементов массива = " << average;
    cout << "\n\n";

    //3
    srand(time(0));
    int positive{ 0 }, negative{ 0 }, zero{ 0 };

    cout << "3)\n";

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100 - 49; // числа от -49 до 50
        cout << array[i] << " ";
    }
    cout << "\n";

    countPositiveNegativeZero(array, size, positive, negative, zero);

    cout << "\n";
    
    //1
    const int matrixSize = 5;
    int matrInt[matrixSize][matrixSize];
    double matrDouble[matrixSize][matrixSize];
    char matrChar[matrixSize][matrixSize];


    cout << "1)\n";

    int first = matrix(matrInt, matrixSize);
    cout << "\n";
    double second = matrix(matrDouble, matrixSize);
    cout << "\n";
    char third = matrix(matrChar, matrixSize);
    cout << "\n\n";
    
    //2
    int a, b, c;

    cout << "2)\nВведите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    c = greatestCommonDivisor(a, b, b);

    cout << c;
    cout << "\n\n";

    //3
    int secretNumber[4], attempts{ 1 }, bulls{ 0 }, cows{ 0 };

    generateNumber(secretNumber);

    play(secretNumber, attempts, bulls, cows);


    return 0;
}

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int days = 0;

    if ((year1 > year2) || (year1 == year2 && month1 > month2) || (year1 == year2 && month1 == month2 && day1 > day2)) {
        std::swap(day1, day2);
        std::swap(month1, month2);
        std::swap(year1, year2);
    }

    while (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2)) {
        days += 1;
        day1 += 1;

        if (day1 > (isLeap(year1) ? 29 : daysInMonth[month1])) {
            day1 = 1;
            month1 += 1;
        }

        if (month1 > 12) {
            month1 = 1;
            year1 += 1;
        }
    }

    return days;
}

double averageValue(int arr[], int size) {
    int sum{ 0 };
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return (double)(sum) / (double)size;
}

void countPositiveNegativeZero(int arr[], int size, int positive, int negative, int zero) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    cout << "Количество положительных элементов: " << positive << "\n";
    cout << "Количество отрицательных элементов: " << negative << "\n";
    cout << "Количество нулевых элементов: " << zero << "\n";
}

int matrix(int matrix[][5], int matrixSize) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix[i][j] = rand() % 100 + 1; // числа от 1 до 100
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    int min = matrix[0][0];
    int max = matrix[0][0];
    for (int i = 0; i < matrixSize; i++) {
            if (matrix[i][i] > max) {
                    max = matrix[i][i];
                }
            if (matrix[i][i] < min) {
                    min = matrix[i][i];
                }
    }

    cout << "Минимальное значение диагонали: " << min << "\n";
    cout << "Максимальное значение диагонали: " << max << "\n";

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize - 1; j++) {
            for (int x = j + 1; x < matrixSize; x++) {
                if (matrix[i][j] > matrix[i][x]) swap(matrix[i][j], matrix[i][x]);
            }
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

double matrix(double matrix[][5], int matrixSize) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix[i][j] = (double) (rand() % 100) + 1.5; // числа от 1.5 до 100.5
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    double min = matrix[0][0];
    double max = matrix[0][0];
    for (int i = 0; i < matrixSize; i++) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }

    cout << "Минимальное значение диагонали: " << min << "\n";
    cout << "Максимальное значение диагонали: " << max << "\n";

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize - 1; j++) {
            for (int x = j + 1; x < matrixSize; x++) {
                if (matrix[i][j] > matrix[i][x]) swap(matrix[i][j], matrix[i][x]);
            }
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0.0;
}

char matrix(char matrix[][5], int matrixSize) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            matrix[i][j] = char(rand() % 26 + 97); // буквы от а до z
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    int min = matrix[0][0];
    int max = matrix[0][0];
    for (int i = 0; i < matrixSize; i++) {
        if ((int) matrix[i][i] > max) {
            max = matrix[i][i];
        }
        if ((int)matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }

    cout << "Минимальное значение диагонали: " << (char) min << "\n";
    cout << "Максимальное значение диагонали: " << (char) max << "\n";

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize - 1; j++) {
            for (int x = j + 1; x < matrixSize; x++) {
                if ((int)matrix[i][j] > (int) matrix[i][x]) swap(matrix[i][j], matrix[i][x]);
            }
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 'a';
}

int greatestCommonDivisor(int a, int b, int b2) {
    if (a > b) swap(a, b);
    if ((b % b2 == 0) && (a % b2 == 0)) return b2;
    return greatestCommonDivisor(a, b, b2 - 1);
}

void generateNumber(int secretNumber[]) {
    for (int i = 0; i < 4; i++) {
        if (i == 0) secretNumber[i] = rand() % 9 + 1;
        else secretNumber[i] = rand() % 10;
    }
}

void play(int secretNumber[], int attempts, int bulls, int cows) {
    int guess[4];

    std::cout << "Введите вашу попытку (четыре цифры без пробелов): ";
    std::cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];

    bulls = cows = 0;
    bool secretUsed[4] = { false, false, false, false };
    bool guessUsed[4] = { false, false, false, false };

    for (int i = 0; i < 4; i++) {
        if (secretNumber[i] == guess[i]) {
            bulls++;
            secretUsed[i] = guessUsed[i] = true;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (!secretUsed[i] && !guessUsed[j] && secretNumber[i] == guess[j]) {
                cows++;
                secretUsed[i] = guessUsed[j] = true;
            }
        }
    }

    if (bulls == 4) {
        std::cout << "Поздравляем, вы угадали число!" << std::endl;
        std::cout << "Количество попыток: " << attempts << std::endl;
    }
    else {
        std::cout << "Быки: " << bulls << " Коровы: " << cows << std::endl;
        play(secretNumber, attempts + 1, bulls, cows);
    }
}
