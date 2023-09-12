#include <iostream>

using namespace std;

int matrix(int matrix[][5], int matrixSize);
double matrix(double matrix[][5], int matrixSize);
char matrix(char matrix[][5], int matrixSize);

int main() {

    setlocale(0, "RUS");
    srand(time(0));

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

    return 0;
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


    return 'a';
}
