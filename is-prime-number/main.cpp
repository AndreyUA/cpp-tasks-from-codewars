// What is a prime number?
// That’s right! It’s a positive integer greater
// than 1 that is divisible without a remainder only by itself or by 1.
// Write a program that prompts the user to enter a prime integer less than 10.
// If the user enters one of the following numbers: 2, 3, 5, or 7,
// the program should print “The digit is prime”;
// otherwise, it should print “The digit is not prime.”

// Hint: Use an if statement to compare numbers and logical
// values to determine whether the user's number is prime or not.

#include <iostream>


int main() {
	while (true) {
		int number;

		std::cout << "Enter integer positive number less then 10" << std::endl;

		std::cin >> number;

		if (
			number == 1 ||
			number == 2 ||
			number == 3 ||
			number == 5 ||
			number == 7
		) {
			std::cout << "The digit is prime" << std::endl;

			continue;
		};

		std::cout << "The digit is not prime" << std::endl;
	};
}