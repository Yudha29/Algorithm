#include <iostream>

using namespace std;

bool isPrimeNumber(int number) {
	for (int i = 2; i < number; i++)
		if (number % i == 0) return false;

	return true;
}

int main() {
	int n = 0;

	cout << "Input jumlah bilangan yang akan di print : ";
	cin >> n;

	for (int i = 0; i < n; i++)
		if (isPrimeNumber(i)) cout << i << " ";

	return 0;
}