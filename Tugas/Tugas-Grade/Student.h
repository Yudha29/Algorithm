#ifndef STUDENTHEADER
#define STUDENTHEADER

#include <iostream>
#include <vector>

namespace Student {
	struct StudentStruct {
		std::string name;
		int score;
	};

	using data = std::vector<StudentStruct>;

	char calculateGrade(const int score);
	std::string getName(std::string message);
	int getInt(std::string message);
	void fillStudents(data & students);
	void printStudents(const data& students);
	void sortByScore(data & students);
}
#endif
