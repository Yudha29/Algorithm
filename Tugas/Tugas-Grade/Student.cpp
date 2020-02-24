#include <iostream>
#include <vector>
#include "Student.h"
#include <string>
#include <algorithm>

namespace Student {

	char calculateGrade(const int score) {
		if (score >= 85) {
			return 'A';
		}
		else if (score >= 65) {
			return 'B';
		}

		return 'C';
	}

	std::string getName(std::string message) {
		std::string temp;

		std::cout << message << " : ";
		std::getline(std::cin, temp);

		return temp;
	}

	int getInt(std::string message) {
		int temp;

		do
		{
			std::cout << message << " : ";
			std::cin >> temp;

			if (std::cin.fail()) {
				std::cin.clear();
			}

			std::cin.ignore(32767, '\n');
		} while (!(temp >= 0 && temp <= 100));

		return temp;
	}

	void fillStudents(data& students) {
		system("cls");
		for (std::vector<data>::size_type i = 0; i < students.size(); i++)
		{
			std::cout << "\nInput Student Data #" << (i + 1) << '\n';

			students.at(i).name = getName("Enter name");
			students.at(i).score = getInt("Enter score");
		}
	}

	void printStudents(const data& students) {
		std::cout << "\n\nScore Result : " << "\n";
		for (auto& student : students) {
			std::cout << student.name << " got score " << student.score << " and grade " << calculateGrade(student.score) << '\n';
		}
	}

	void sortByScore(data& students) {
		for (size_t i = 0; i < students.size(); i++)
		{
			int maxIndex = i;
			for (size_t j = i + 1; j < students.size(); j++)
			{
				if (students.at(maxIndex).score < students.at(j).score) {
					maxIndex = j;
				}
			}
			std::swap(students.at(maxIndex), students.at(i));
		}
	}
}