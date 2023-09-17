#include <iostream>


using namespace std;


template <typename T> double average(T array[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) sum += array[i];
	return sum / (double)size;
}

template <typename T> T f(T a, T b) {
	return (-b) / a;
}

template <typename T> T f(T a, T b, T c) {
	T d = b * b - (T)4 * a * c;
	if (d > 0) {
		T x1 = (-b + sqrt(d)) / ((T)2 * a);
		T x2 = (-b - sqrt(d)) / ((T)2 * a);
		cout << "2 корня\n" << x1 << "\n";

		return x2;
	}
	else if (d == 0) {
		T x = -b / ((T)2 * a);
		cout << "1 корень\n";
		return x;
	}
	else {
		cout << "Нет корней\n";
		return 0; 
	}
}

double number(double num, int quant) {
	int temp = 10;
	for (int i = 1; i < quant; i++) {
		temp *= 10;
	}
	num *= temp;
	num = (int)num;
	return num / temp;
}


int main() {

	setlocale(0, "RUS");

	// 1
	const int size = 5;
	int arrayI[size] = { 1, 2, 4, 5, 6 };
	double arrayF[size] = { 1.8, 2.5, 4.4, 5.7, 6.3 };
	cout << "1)\n";

	cout << average(arrayI, size);
	cout << "\n";
	cout << average(arrayF, size);
	cout << "\n";

	// 2
	int aI{ 1 }, bI{ -4 }, cI{ 0 };
	float aF{ 4.6 }, bF{ 1.3 }, cF{ 6.4 };
	double aD{ 6.654 }, bD{ 7.356 }, cD{ -2.453 };

	cout << "2)\n\nax + b = 0\n";
	cout << "a = " << aI << " b = " << bI << "\n";
	cout << f(aI, bI);
	cout << "\n";
	cout << "a = " << aF << " b = " << bF << "\n";
	cout << f(aF, bF);
	cout << "\n";
	cout << "a = " << aD << " b = " << bD << "\n";
	cout << f(aD, bD);
	cout << "\n";
	cout << "\n";
	cout << "axx + bx + c = 0\n";
	cout << "a = " << aI << " b = " << bI << " c = " << cI << "\n";
	cout << f(aI, bI, cI);
	cout << "\n";
	cout << "a = " << aF << " b = " << bF << " c = " << cF << "\n";
	cout << f(aF, bF, cF);
	cout << "\n";
	cout << "a = " << aD << " b = " << bD << " c = " << cD << "\n";
	cout << f(aD, bD, cD);
	cout << "\n\n";

	// 3
	double num;
	int quantity;

	cout << "3)\nВведите вещественное число и количество знаков после запятой: ";
	cin >> num >> quantity;

	cout << number(num, quantity);


	return 0;
}
