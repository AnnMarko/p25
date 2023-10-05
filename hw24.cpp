#include <iostream>


using namespace std;


int* addElements(int* array, int size, int quantity) {
    int* temp = new int[size + quantity];

    for (int i = 0; i < size; i++)
        temp[i] = array[i];

    for (int i = size; i < (size + quantity); i++)
        temp[i] = rand() % 100 + 1;

    delete[] array;
    return temp;
}


int main()
{
    srand(time(0));

    // 1
    cout << "1)\n";
    int size, quantity;
    cout << "Enter size of array: ";
    cin >> size;



    int* array = new int[size];



    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
        cout << array[i] << " ";
    }
    cout << '\n';

    cout << "Input quantity: ";
    cin >> quantity;


    int* temp = new int[size + quantity];

    for (int i = 0; i < size; i++)
        temp[i] = array[i];

    for (int i = size; i < (size + quantity); i++)
        temp[i] = rand() % 100 + 1;

    delete[] array;

    array = temp;


    for (int i = 0; i < size + quantity; i++)
        cout << array[i] << " ";
    cout << '\n';

    delete[] array;


    // 2
    cout << "2)\n";

    cout << "Enter size of array: ";
    cin >> size;

    array = new int[size];

    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
        cout << array[i] << " ";
    }
    cout << '\n';

    cout << "Input quantity: ";
    cin >> quantity;

    array = addElements(array, size, quantity);

    for (int i = 0; i < size + quantity; i++)
        cout << array[i] << " ";
    cout << '\n';

    delete[] array;


    // 3
    int M, N, same{ 0 }, sameA{ 0 }, Csize;
    cout << "3)\n";

    cout << "Enter size of array A: ";
    cin >> M;
    
    cout << "Enter size of array B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    for (int i = 0; i < M; i++) {
        A[i] = rand() % 10 + 1;
        cout << A[i] << " ";
    }
    cout << '\n';

    for (int i = 0; i < N; i++) {
        B[i] = rand() % 10 + 1;
        cout << B[i] << " ";
    }
    cout << '\n';


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                same++;
            }
        }
    }
    
    for (int i = 0; i < M - 1; i++) {
        for (int j = i + 1; j < M; j++) {
            if (A[i] == A[j]) {
                sameA++;
            }
        }
    }

    Csize = M + N - same;

    int* C = new int[Csize];

    for (int i = 0; i < Csize; i++) {
        for (int d = 0; d < M; d++) {
            bool dublicate = false;
            for (int k = 0; k < i; k++) {
                if (A[d] == C[k]) {
                    dublicate = true;
                    break;
                }
            }
            if (!dublicate) {
                C[i] = A[d];
            }

        }
    }

    for (int i = M - sameA; i < Csize; i++) {
        for (int d = 0; d < N; d++) {
            bool dublicate = false;
            for (int k = 0; k < i; k++) {
                if (B[d] == C[k]) {
                    dublicate = true;
                    break;
                }
            }
            if (!dublicate) {
                C[i] = B[d];
            }

        }
    }

    for (int i = Csize; i > 0; i--) {
        if (!(C[i] > 0 && C[i] < 11)) Csize--;
    }

    for (int i = 0; i < Csize + 1; i++)
        cout << C[i] << " ";
    cout << '\n';


    return 0;
}
