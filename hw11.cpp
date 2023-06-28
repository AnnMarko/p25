#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "RUS");

    int n, num;
    char symb;
    cout << "\nВведите длину стороны холста и символ через пробел: ";
    cin >> n >> symb;
    while (true)
    {
        cout << "\nВведите номер задания от 1 до 10: ";
        cin >> num;
        switch (num) {
        case 1:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i < j) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 2:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i > j) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 3:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i + j < n - 1 && i < j) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 4:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i + j > n - 1 && i > j) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 5:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (!(i + j < n - 1 && i > j) && !(i + j > n - 1 && i < j)) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 6:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (!(i + j < n - 1 && i < j) && !(i + j > n - 1 && i > j)) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 7:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i + j < n - 1 && i > j) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 8:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i + j > n - 1 && i < j) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 9:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i + j < n - 1) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        case 10:
            for (int i = 0; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (i + j > n - 1) cout << symb;
                    else cout << " ";
                }
                cout << "\n";
            }
            break;
        default:
            cout << "Неверный номер!";
            break;
        }

        cout << "\n";

    }

    return(0);

}
