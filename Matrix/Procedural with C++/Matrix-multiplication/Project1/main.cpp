#include <iostream>

using namespace std;
int main() {
	int a[3][3] = {
		{1, 2, 3},
		{2, 6, 3},
		{4, 2, 6}
	};
	int b[3][3] = {
	{4, 2, 3},
	{2, 3, 3},
	{4, 2, 1}
	};
	int c[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int total = 0;
			for (int k = 0; k < 3; k++) {
				total += a[i][k] * b[k][j];
			}

			c[i][j] = total;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << c[i][j] << " ";
		}

		cout << '\n';
	}
}