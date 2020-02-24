#include <iostream>
#include <vector>
#include "Student.h"

int main() {
	int studentSize = Student::getInt("Masukan jumlah murid");

	Student::data students(studentSize);

	Student::fillStudents(students);

	Student::sortByScore(students);

	Student::printStudents(students);

	return 0;
}