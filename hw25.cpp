#include <iostream>


using namespace std;


void change(char* str, int size)
{
	for (int i = 0; i < size; i++) {
		if (str[i] == '.') str[i] = '!';
	}
}

int count(char* str, int size, char symbol)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] == symbol) count++;
	}
	return count;
}


int main() {
	// 1
	const int size = 16;
	char string[size] = "Okay. Let's go.";
	cout << string << '\n';
	change(string, size);
	cout << string << '\n';
	cout << '\n';

	// 2
	char symbol;
	cin >> symbol;
	cout << "There are " << count(string, size, symbol) << " symbols in the string\n";


	return 0;
}
