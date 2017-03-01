// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
/*

*/

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

#ifdef _WIN32
#define WINPAUSE system("pause")
#endif
using namespace std;

/*int resume() {
	int num1, num2, result;
	std::cout << "Please enter the first number to add: ";
	cin >> num1;
	std::cout << "Please enter the second number to add: ";
	cin >> num2;
	cout << "\n";
	result = num1 + num2;
	std::cout << "The Result is: " << result << endl << "\n";
	std::cout << "Thank you for using Adix Calculator!" << endl << "\n";
	//cin >> break_;
	WINPAUSE;
	return 0;
}*/

int main()
{
	int num1, num2, result;
	std::cout << "Hello World! This is Adix Calculator!" << endl << "\n";
	std::cout << "Please enter the first number to add: " ;
	cin >> num1;
	std::cout << "Please enter the second number to add: ";
	cin >> num2;
	cout << "\n";
	result = num1 + num2;
	std::cout << "The Result is: " << result << endl << "\n";
	std::cout << "Thank you for using Adix Calculator!" << endl << "\n";
	//cin >> break_;
	//resume();
	while (num1 <= 0 || num1 >= 0) {
		std::cout << "\n" << "\n" << "\n" << "\n";
		std::cout << "Please enter the first number to add: ";
		cin >> num1;
		std::cout << "Please enter the second number to add: ";
		cin >> num2;
		cout << "\n";
		result = num1 + num2;
		std::cout << "The Result is: " << result << endl << "\n";
		std::cout << "Thank you for using Adix Calculator!" << endl << "\n";
	}
	WINPAUSE;
    return 0;
}

