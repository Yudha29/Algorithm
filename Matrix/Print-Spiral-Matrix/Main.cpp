#include <iostream>
#include <array>

std::array<int, 20> arr;
const int row = 5, col = 4;

void fillArray(std::array<int, 20>& arr) {
	for (size_t i = 0; i < arr.size(); i++)
	{
		arr[i] = i;
	}
}

void printArray(std::array<int, 20>& arr) {
	for (size_t i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << '\t';

		if ((i + 1) % col == 0) {
			std::cout << '\n';
		}
	}
}

int getE(int r, int c) {
	return arr[(r * col) + c];
}

void printSpecial() {
	int startR = 0, endR = row - 1, startC = 0, endC = col - 1;
	int counter = 0, i = 0, j = col - 1;
	bool changeR = false, increment = false;

	while (counter < (row * col))
	{
		std::cout << getE(i, j) << " ";
		counter++;
		if (changeR) {
			if (increment) {
				i++;
			}
			else {
				i--;
			}
		}
		else  {
			if (increment) {
				j++;
			}
			else {
				j--;
			}
		}

		if (counter != 0) {
			if (j == startC && i == startR && startR != endR && !changeR) {
				startR++;
				changeR = true;
				increment = true;
			}
			else if (i == endR && j == startC && startC != endC && changeR) {
				startC++;
				changeR = false;
				increment = true;
			}
			else if (j == endC && i == endR && startR != endR && !changeR) {
				endR--;
				changeR = true;
				increment = false;
			}
			else if (i == startR && j == endC && startC != endC && changeR) {
				endC--;
				changeR = false;
				increment = false;
			}
		}
	}
}

int main() {
	fillArray(arr);
	printArray(arr);
	std::cout << '\n';
	/*std::cout << arr[3] << " ";
	std::cout << getE(0, 3);*/
	printSpecial();
}