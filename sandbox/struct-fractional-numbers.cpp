// Create a structure to store fractional numbers.
// The structure should have two members:
// an integer numerator and an integer denominator.
// Declare two fractional variables and prompt the user to enter their values.
// Write a function multiply()
// (which takes these two variables as parameters)
// that multiplies these numbers and outputs the result as a decimal number.

#include <iostream>

struct FractionalNumber {
	int numerator;
	int denominator;
};

void multiply(FractionalNumber a, FractionalNumber b) {
	double result = static_cast<double>(a.numerator * b.numerator) / static_cast<double>(a.denominator * b.denominator);

	std::cout << result << std::endl;
}

int main() {
	FractionalNumber a;
	std::cout << "Enter numerator and denominator for first fractional number" << std::endl;
	std::cin >> a.numerator;
	std::cin >> a.denominator;

	FractionalNumber b;
	std::cout << "Enter numerator and denominator for second fractional number" << std::endl;
	std::cin >> b.numerator;
	std::cin >> b.denominator;

	multiply(a, b);
}