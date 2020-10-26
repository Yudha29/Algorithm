#include <iostream>
#include <conio.h>

using namespace std;

//define alias untuk tipe data array string dengan panjang 5 elemen
typedef string himpunantext[5];
//define alias untuk tipe data array integer dengan panjang 5 elemen
typedef int himpunannilai[5];

/*
 * Fungsi untuk menghitung nilai akhir
 * Parameter
 * tm - nilai latihan
 * uts - nilai uts
 * uas - nilai uas
*/
int hitungNilai(int tm, int uts, int uas) {
	//hitung nilai akhir sebagai rata rata nilai uas, uts dan tm
	int nilaiakhir = (tm + uts + uas)/3;
	
	//return nilai akhir
	return nilaiakhir;
}

/*
 * Fungsi untuk menentukan grade
 * Parameter
 * nilaiakhir - nilai akhir dari siswa
*/
char hitungGrade(int nilaiakhir) {
	char grade;
	
	//jika nilai lebih dari 80
	if (nilaiakhir > 80)
		//maka grade adalah A
		grade = 'A';
		
	//jika nilai lebih dari 60
	else if (nilaiakhir > 60)
		//maka grade adalah B
		grade = 'B';
		
	//jika nilai lebih dari 40
	else if (nilaiakhir > 40)
		//maka grade adalah C
		grade = 'C';
		
	//Selain itu
	else 
		//maka grade adalah D
		grade = 'D';
		
	return grade;
}

/*
 * prosedur untuk print data dan nilai siswa
 * Parameter
 * nama - nama dari siswa
 * kelas - kelas dari siswa
 * tm - nilai latihan
 * uts - nilai uts
 * uas - nilai uas
*/
void printSiswa(string nama, string kelas, int tm, int uts, int uas) {	
	int nilaiakhir = hitungNilai(tm, uts, uas);
	char grade = hitungGrade(nilaiakhir);
	
	cout << nama << "\t" << kelas << "\t" << tm << "\t" << uts << "\t" << uas << '\t' << nilaiakhir << "\t\t" << grade << "\n";
}

/*
 * prosedur untuk input seluruh data dan nilai siswa
 * Parameter
 * nama - array dari nama
 * kelas - array dari kelas
 * tm - array dari nilai latihan
 * uts - array dari nilai uts
 * uas - array dari nilai uas
*/
void inputSiswa(himpunantext nama, himpunantext kelas, himpunannilai tm, himpunannilai uts, himpunannilai uas) {
	//loop dan input tiap data siswa satu persatu ke dalam array
	for (int i=0; i<5; i++) {
		cout << "\nInput mahasiswa ke " << i + 1 << "\n";
		
		//input nama
		cout << "Nama 	: ";
		cin >> nama[i];
		
		//input kelas
		cout << "Kelas 	: ";
		cin >> kelas[i];
		
		//input TM
		cout << "TM 	: ";
		cin >> tm[i];
		
		//input UTS
		cout << "UTS 	: ";
		cin >> uts[i];
		
		//input UAS
		cout << "UAS 	: ";
		cin >> uas[i];
	}
}

/*
 * prosedur untuk memprint seluruh data dan nilai siswa
 * Parameter
 * nama - array dari nama
 * kelas - array dari kelas
 * tm - array dari nilai latihan
 * uts - array dari nilai uts
 * uas - array dari nilai uas
*/
void printSemuaSiswa(himpunantext nama, himpunantext kelas, himpunannilai tm, himpunannilai uts, himpunannilai uas) {
	cout << "\n\n===============================================================\n";
	cout << "nama\tkelas\tTM\tUTS\tUAS\tNilai Akhir\tGrade\n";
	cout << "===============================================================\n";
	
	//loop dan print tiap siswa di dalam array
	for (int i=0; i<5; i++) {
		//print masing masing siswa
		printSiswa(nama[i], kelas[i], tm[i], uts[i], uas[i]);
	}
}

main() {
	//buat variable untuk menyimpan kumpulan nama dan kelas siswa
	himpunantext nama, kelas;
	//buat variable untuk menyimpan kumpulan nilai tm, uts dan uas
	himpunannilai tm, uts, uas;
	
	cout << "Program hitung nilai siswa\n\n";
	
	//input data siswa ke dalam array
	inputSiswa(nama, kelas, tm, uts, uas);
	
	//print semua data siswa yang telah terinput dalam array
	printSemuaSiswa(nama, kelas, tm, uts, uas);
}
