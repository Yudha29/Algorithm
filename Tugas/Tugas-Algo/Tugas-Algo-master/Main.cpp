#include <iostream>

using namespace std;

//READ ME
// case 1 input jumlah element: syarat user harus belum input jumlah element baru bisa input tapi jika user udah input maka tampilkan jumlah elementnya
// case 2 input data tiap element: syarat user harus sudah input jumlah element dan belum input tiap data dalam element
// case 3 tampilkan array: syarat user harus sudah input jumlah element dan data untuk tiap element
// case 4 urutkan array: syarat user harus sudah input jumlah element dan data untuk tiap element

int jumlahElement = 0; // variable untuk menampung jumlah element pada array
int arr[50], copyArr[50];

bool sudahInputJumlahElement = false; //untuk melihat apakah user sudah input jumlah element atau belum jika false berati belum jika true berarti sudah
bool sudahIsiTiapElement = false;//untuk melihat apakah user sudah input setiap element array atau belum jika false berati belum jika true berarti sudah

void inputJumlahElement() {
	cout << "Input Jumlah Element : "; //tampilkan message kepada user untuk menginput jumlah element
	cin >> jumlahElement;

	sudahInputJumlahElement = true; //ubah ke true untuk menandakan user sudah input
}

void IsiElementArray() {
	//input setiap element dalam array menggunaka for
	for (int i = 0; i < jumlahElement; i++)
	{
		//print pesan untuk input
		cout << "#" << i << " Input : ";
		//simpan inputan user
		cin >> arr[i];
	}

	//ubah variable ke true untuk menandakan user telah input tiap element dari array
	sudahIsiTiapElement = true;
}

//fungsi ini untuk mengcopy seluruh element dalam array bernama arr ke array bernama copyArr
//copyArr adalah array yang digunakan untuk sorting sementara arr adalah untuk di print (tidak di sort)
void copyElement() {
	//copy tiap element arr ke copy arr
	for (int i = 0; i < jumlahElement; i++)
	{
		copyArr[i] = arr[i];
	}
	//jadi setiap arr dan copyArr memiliki element yang sama
}

//sorting element yang ada di dalam copyArr
void sortArray() {
	for (int i = 0; i < jumlahElement; i++)
	{
		for (int j = 0; j < jumlahElement - 1; j++)
		{
			//cek apakah element ke j lebih besar dari element ke j+1
			if (copyArr[j] > copyArr[j+1])
			{
				//gunakan proses untuk menukar data yang ada di element ke j dan j+1
				//simpan data copyArr[j] ke dalam tempat penyimpanan sementara
				int penyimpananSementara = arr[j];
				//ganti isi copyArr[j] menjadi isi dari copyArr[j+1]
				copyArr[j] = copyArr[j + 1];
				//data copyArr[j] telah disimpan dan bisa kita masukan ke copyArr[j+1]
				copyArr[j + 1] = penyimpananSementara;
			}
		}
	}
}

void printArray(int * array) {
	for (int j = 0; j < jumlahElement; j++)
	{
		cout << array[j] << " ";
	}
}

void printMenu() {
	cout << "Menu" << endl;
	cout << "1. Input Jumlah Element" << endl;
	cout << "2. Input element array" << endl;
	cout << "3. Print Array" << endl;
	cout << "4. Urutkan Array" << endl;
	cout << "5. Keluar" << endl;
}

int main() {
	//buat variable untuk menampung data menu
	int menu = 0;
top: // definisikan label top untuk mengulang proses
	system("cls");
	//print menu
	printMenu();
	//print pesan untuk input no menu
	cout << "Pilih Menu : ";
	//simpan ke variable menu
	cin >> menu;

	system("cls");
	//cek dan pilih action sesuai menu yang dipilih
	switch (menu)
	{
	case 1:
		//jika user pilih case 1 make

		//cek apakah user sudah input jumlah element
		if (sudahInputJumlahElement == false) {
			//jika belum maka input jumlah element
			inputJumlahElement();
		}
		else {
			//jika sudah maka cukup tampilkan jumlah element yang telah di input
			cout << jumlahElement;
		}
		break;
	case 2:
		//jika user pilih case 2

		//cek apakah user sudah input jumlah element
		if (sudahInputJumlahElement == true)
		{
			//jika sudah maka cek lagi apakah user sudah input data untuk tiap element array
			if (sudahIsiTiapElement == false) {
				//jika belum maka input data untuk tiap element array
				IsiElementArray();
			}
			else {
				//jika sudah maka print tulisan "Data telah di Input"
				cout << "Data telah di Input";
			}
		}
		else {
			//jika user belum input jumlah element
			//maka print pesan ke user untuk input jumlah element terlebih dahulu
			cout << "Silahkan Input Jumlah Element terlebih dahulu";
		}
		break;
	case 3:
		//jika user pilih case 3

		//cek apakah user sudah input jumlah element
		if (sudahInputJumlahElement == true)
		{
			//jika sudah maka cek lagi apakah user sudah input data untuk tiap element array
			if (sudahIsiTiapElement == true)
			{
				//jika sudah maka tampilkan array arr
				printArray(arr);
			}
			else {
				//jika belum input data untuk tiap element maka perintahkan user untuk input dulu
				cout << "Silahkan Input Setiap Element terlebih dahulu sebelum menampilkan array";
			}
		}
		else {
			//jika belum input data untuk tiap element maka perintahkan user untuk input jumlah element dulu
			cout << "Silahkan Input Jumlah Element terlebih dahulu sebelum menampilkan array";
		}
		break;
	case 4:
		//jika user pilih case 4

		//cek apakah user sudah input jumlah element
		if (sudahInputJumlahElement == true)
		{
			//jika sudah maka cek lagi apakah user sudah input data untuk tiap element array
			if (sudahIsiTiapElement == true)
			{
				//jika sudah
				copyElement(); //copy element yang ada pada array arr ke array copyArr
				sortArray(); //lalu sort data yang ada dalam copyArr
				printArray(copyArr); //print semua element yang ada dalam copyArr dimana copyArr telah tersorting
			}
			else {
				//jika belum input data untuk tiap element maka perintahkan user untuk input dulu
				cout << "Silahkan Input Setiap Element terlebih dahulu sebelum sorting array";
			}
		}
		else {
			//jika belum input data untuk tiap element maka perintahkan user untuk input jumlah element dulu
			cout << "Silahkan Input Jumlah Element terlebih dahulu sebelum sorting array";
		}
		break;
	case 5:
		//jika user pilih case 5
		cout << "Terima Kasih telah menggunakan aplikasi kami";
		exit(0); //keluar dari aplikasi
		break;
	}

	cout << '\n';

	system("pause");

	//goto top untuk kembali ke atas jadi jika user blum pilih keluar  maka program akan terus kembali ka atas
	//dimana label top didefinisikan
	goto top;

	return 0;
}