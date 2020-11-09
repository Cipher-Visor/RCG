/*
A random character generator.
2020 (c) Cipher Visor https://github.com/Cipher-Visor
*/
//declare libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int howlong; //size of string to be generated 
int whichchar; //decider of whether the outputted char will be a number, upper case letter, lower case letter, or special character
int alphanum; //char to be output

//being executed program
int main() {
	srand(time(NULL)); //apearently its good practice to NULLify the time variable for use in RNG computations
	std::cout << "How long should the string be? (0 if you want repeat)" << std::endl; 
	std::cin >> howlong;
	if (howlong > 0) { //if its greater than zero then simply output a string the size of the input
		for (int x = 0; x < howlong; x++) { //begin a for loop to output random chars till it reaches the specified size
			whichchar = (rand() % 4) + 1; //do some RNG to decide whether to output a number, upper case letter, lower case letter, or special character
			if (whichchar == 1) { //if 1, then output a random number
				alphanum = (rand() % 10) + 1; //generate the number
				const char* alpha = "0123456789"; //tbh i dont fully understand how this and the next 2 lines work but its very important for the program. one time someone on stack overflow gave it to me and hippity hoppity that code was my property
				if (alphanum >= 1 && alphanum <= 26 { 
					std::cout << alpha[alphanum - 1];
				}
			}
			if (whichchar == 2) {
				alphanum = (rand() % 26) + 1;
				const char* alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
				if (alphanum >= 1 && alphanum <= 26) {
					std::cout << alpha[alphanum - 1];
				}
			}
			if (whichchar == 3) {
				alphanum = (rand() % 26) + 1;
				const char* alpha = "abcdefghijklmnopqrstuvwuxyz";
				if (alphanum >= 1 && alphanum <= 26) {
					std::cout << alpha[alphanum - 1];
				}
			}
			if (whichchar == 4) {
				alphanum = (rand() % 10) + 1;
				const char* alpha = "!@#$%^&*()";
				if (alphanum >= 1 && alphanum <= 10) {
					std::cout << alpha[alphanum - 1];
				}
			}
		}
	}
	else if (howlong == 0) { //if user enters 0 then the program will continue till they kill it
		while (true) {
			whichchar = (rand() % 4) + 1;
			if (whichchar == 1) {
				alphanum = (rand() % 10) + 1;
				const char* alpha = "0123456789";
				if (alphanum >= 1 && alphanum <= 26) {
					std::cout << alpha[alphanum - 1];
				}
			}
			if (whichchar == 2) {
				alphanum = (rand() % 26) + 1;
				const char* alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
				if (alphanum >= 1 && alphanum <= 26) {
					std::cout << alpha[alphanum - 1];
				}
			}
			if (whichchar == 3) {
				alphanum = (rand() % 26) + 1;
				const char* alpha = "abcdefghijklmnopqrstuvwuxyz";
				if (alphanum >= 1 && alphanum <= 26) {
					std::cout << alpha[alphanum - 1];
				}
			}
			if (whichchar == 4) {
				alphanum = (rand() % 10) + 1;
				const char* alpha = "!@#$%^&*()";
				if (alphanum >= 1 && alphanum <= 10) {
					std::cout << alpha[alphanum - 1];
				}
			}
		}
	}
	return 0; //terminate program
}
