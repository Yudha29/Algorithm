#include <iostream>

//fungsi ini punya 1 parameter yaitu number (Bilangan yang ingin di cek prima atau tidak)
//yang dihasilkan adalah true atau false jika prima maka true jika tidak maka false
bool isPrime(int number) {
	//faktor dari bilangan prima hanya 1 dan bilangan itu sendiri
	//contoh faktor dari 5 hanya 1 dan 5
	//contoh faktor dari 2 hanya 1 dan 2

	//karena faktornya hanya 1 dan bilangan itu sendiri maka
	//untuk cek kita harus membagi bilangan itu secara berulang bilangan dengan diatas 1 dan dibawah bilangan yang mau di cek
	for (int i = 2; i < number; i++)
	{
		//jika ditemukan pembagi yang dapat membagi habis selain 1 dan bilangan itu sendiri
		if (number % i == 0) {
			//return false yang menyatakan ini bukan prima tapi composite
			return false;
		}
	}

	//jika tidak ditemukan pembagi maka return true yang menyatakan ini prima 
	return true;
}

int main() {
	//contoh tester
	//jika hasilnya prima maka return true dan karena nilai nya true(benar) maka jalankan statement if
	if (isPrime(5)) {
		std::cout << "Prima" << '\n';
	}
	//jika hasil yang dikeluarkan false maka kerjakan else statement
	else {
		std::cout << "Composite" << '\n';
	}

	//bisa digabungkan dengan for untuk membuat deret bilangan prima dari 0 - 9
	for (int a = 1; a < 10; a++)
	{
		if (isPrime(a)) {
			std::cout << a << " ";
		}
	}

	std::cout << '\n';

	//bisa digabungkan dengan for untuk membuat deret bilangan prima dari 0 - 9 dengan membalik nilai boolean yang di return isPrime()
	for (int a = 1; a < 10; a++)
	{
		//operator not ( ! ) membalik nilai boolean yang di hasilkan isPrime jadi
		//jika bilangan nya prima maka hasil yang seharusnya true dibalik menjadi false dan
		//jika bilangan nya bukan prima maka hasil yang seharusnya false dibalik menjadi true
		if (!isPrime(a)) {
			std::cout << a << " ";
		}
	}

	return 0;
}