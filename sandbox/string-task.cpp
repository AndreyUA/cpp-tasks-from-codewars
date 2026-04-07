// Write a program that prompts the user to enter
// their first name, last name, and age.
// Then, tell the user how many years they have lived for
// each letter of their first and last names
// (to make it easier, include spaces as well). For example:

// Enter your full name: Tom Cats
// Enter your age: 45
// You've lived 5.625 years for each letter in your name.

#include <iostream>
#include <string>

int main() {
	std::cout << "Enter your full name: ";
	std::string full_name;
	std::getline(std::cin, full_name);

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;

	double age_per_letter = static_cast<double>(age) / full_name.length();
	std::cout << "You've lived " << age_per_letter << " years for each letter in your name." << std::endl;
}