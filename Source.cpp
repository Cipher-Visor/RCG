#include <iostream> // declare libs
#include <cstdlib>
#include <ctime>
#include <windows.h>

int  howlong;   // declars vars, size of string to be generated
float  odelay = 0;
void rcg(int alphanum, int whichchar);     // declaring a function which will process and out the chars, made to compact and clean the program sense this is used twice

int main() { // main program
	srand(time(NULL)); // NULL the time var beforehand for more rnadom computations
	std::cout << "Enter string size, 0 for repeat. Also enter output delay in seconds. 0 if ommited. Input ex: X X" << std::endl;
	std::cin >> howlong >> odelay;
	odelay = (odelay * 1000);
	if (howlong > 0) { // if its greater than zero then begin a for loop that outputs as long as specified
		for (int x = 0; x < howlong; x++) {
			rcg(0, 0);
		}
	}
	else if (howlong == 0) { // if user enters 0 then the program will continue till they kill it
		while (true) {
			rcg(0, 0);
		}
	}
	return 0;
}

void rcg(int alphanum, int whichchar) {   // define function for random character processing and output
	whichchar = (rand() % 4) + 1;		  // RNG to decide which type of char to output (number, upper case letter, lower case letter, or special character)
	if (whichchar == 1) {				  // if this then output that etc.
		alphanum = (rand() % 10) + 1;	  // generate the number
		const char* alpha = "0123456789"; // creates a list of the type of char to output, in the following if it will output the character of the random numbers position
		std::cout << alpha[alphanum - 1];
	}
	if (whichchar == 2) {
		alphanum = (rand() % 26) + 1;
		const char* alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::cout << alpha[alphanum - 1];
	}
	if (whichchar == 3) {
		alphanum = (rand() % 26) + 1;
		const char* alpha = "abcdefghijklmnopqrstuvwuxyz";
			std::cout << alpha[alphanum - 1];
	}
	if (whichchar == 4) {
		alphanum = (rand() % 10) + 1;
		const char* alpha = "!@#$%^&*()";
			std::cout << alpha[alphanum - 1];
	}
	Sleep(odelay);
}