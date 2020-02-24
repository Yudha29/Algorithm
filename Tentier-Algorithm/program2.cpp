#include <iostream.h>
#include <windows.h>

int dat[10] = {21, 5, 7, 4, -4, -9, 16, 8, 9, 30};
int tmp[10] = {24, 1, 3, 9, 10, -1, 3, 0, 5, 50};
int res[5][10];
int length = 10;

void show(int limit) {
	for (int i = 0; i < limit; i++) {
  		for (int j = 0; j < length; j++) {
          cout << res[i][j] << " ";
   	}
      cout << '\n';
   }
}

int add(int a, int b) {
	return (a + b);
}

void addArray() {
 	for (int i = 0; i < length; i++ ) {
		res[3][i] = add(res[0][i],res[1][i]);
   }
   show(4);
}
int multiply(int a, int b) {
	return (a * b);
}

void multiplyArray() {
 	for (int i = 0; i < length; i++ ) {
		res[4][i] = multiply(res[0][i],res[1][i]);
   }
   show(5);
}

void inputArray() {
 	for (int i = 0; i < length; i++ ) {
		res[1][i] = tmp[i];
  		res[0][i] = dat[i];
   }
   show(2);
}

int max(int a, int b) {
	if (a > b) {
		return a;
   }
   return b;
}

void maxArray() {
	for (int i = 0; i < length; i++ ) {
		res[2][i] = max(res[0][i],res[1][i]);
   }
   show(3);
}

main() {
	do {
		int input = 0;
		cout << "Menu\n";
	   cout << "1. Input array dat dan temp\n";
		cout << "2. max array\n";
	   cout << "3. penjumlahan\n";
	   cout << "4. perkalian\n";
  	   cout << "5. Tampilkan\n";
	   cout << "6. keluar\n";
   	cout << "Input : ";
		cin >> input;

	   switch(input) {
	   	case 1:
   	   	inputArray();
	      break;
	      case 2:
      		maxArray();
      	break;
         case 3:
      		addArray();
      	break;
         case 4:
      		multiplyArray();
      	break;
         case 5:
      		show(5);
      	break;
         default:
				exit(0);
   	}
      cout << '\n';
      system("pause");
      system("cls");
   }	while(true);
}
