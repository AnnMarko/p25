#include <iostream>
#include <cmath>
#define IS_EVEN(x) (x % 2 == 0)
#define SUM1N(n) ((n) * ((n) + 1) / 2)
#define POWER(base, exponent) (pow(base, exponent))


using namespace std;


void stars(int N) {
	if (N > 0) {
		cout << "*";
		stars(N - 1);
	}
}

void numbers(int n, int current = 1) {
	cout << current << " ";
	if (current == n) return;
	numbers(n, current + 1);
}


int main() {

	setlocale(0, "RUS");

	// 1
	int a{ 3 }, b{ 4 };
	cout << "1)\n";

	cout << IS_EVEN(a) << "\n";
	cout << IS_EVEN(b) << "\n\n";

	// 2
	int n1{ 17 }, n2{ 7 };
	cout << "2)\n";

	cout << SUM1N(n1);
	cout << "\n";
	cout << SUM1N(n2);
	cout << "\n\n";

	// 3
	int base{ 5 }, exponent{ 3 };
	cout << "3)\n";

	cout << POWER(base, exponent);
	cout << "\n\n";

	// 4
	int N;

	cout << "4)\nВведите количество звёздочек: ";
	cin >> N;

	stars(N);
	cout << "\n\n";

	// 5
	cout << "5)\n";
	numbers(n1);
	cout << "\n";
	numbers(n2);
	cout << "\n";


	return 0;
	
}
