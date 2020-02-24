// CalculateTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //include header file to use cout and cin (input output)
#include <conio.h> //include conio header file to use getch() function
#include <math.h> //math header file to use square root function sqrt()

//forward declaration for function
float inputHeight();
float calculateFinalSpeed(int g, float h);
float calculateTime(int g, float h);

int main() {
	//initialize variable named h to hold the height of the object dropped
	float h{ inputHeight() };
	//initilize variable to hold the acceleration of gravity
	int g = 10;

	//print how long time that object hit the ground
	std::cout << "bola akan menyentuh tanah dalam waktu " << calculateTime(g, h) << " detik ";
	//print final speed when the object hit the ground
	std::cout << "dengan kecepatan akhir " << calculateFinalSpeed(g, h) << " m/s";
;
	// return status code 0 to system
	return 0;
}

/*
 * the function is used to get the height of the object dropped from user
 * argument : no argument
   return value : the height of the object dropped that user input
*/
float inputHeight() {
	//initialize variable to hold user's input
	float heightOfDroppedObject;

	//tell user to input the height of the object dropped
	std::cout << "Masukan Ketinggian bola dijatuhkan(meter) = ";

	//save the height to heightOfDroppedObject variable
	std::cin >> heightOfDroppedObject;

	//if the height of dropped object is less than 0
	if (heightOfDroppedObject < 0) {
		//tell user to input again
		inputHeight();
	}

	//return the height of object dropped that user input
	return heightOfDroppedObject;
}

/*
 * the purpose of this function is to calculate how long time for the object dropped to hit ground
 * Arguments : the acceleration of gravity and the height of the object dropped
 * return : how long time for the object dropped hit the ground
 */
float calculateTime(int g, float h) {
	return sqrt(2 * h / 10) ;
}

/*
 * the purpose of this function is to calculate the final speed when the dropped object hit the ground
 * Arguments : the acceleration of gravity and the height of the object dropped
 * return : the final speed when the dropped object hit the ground
 */
float calculateFinalSpeed(int g, float h) {
	return sqrt(2 * h * g);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
