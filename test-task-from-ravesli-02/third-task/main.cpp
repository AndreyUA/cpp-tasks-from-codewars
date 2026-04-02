// Write the following program.
// First, the user is prompted to enter two floating-point numbers
// (use the double type). Next, the user is prompted to enter
// one of the following mathematical operators: +, -, *, or /.
// The program performs the mathematical operation selected by
// the user on the two numbers and then displays the result on the screen.
// If the user enters an invalid symbol, the program should not display anything.
// For example:

// Enter a double value: 7
// Enter a double value: 5
// Enter one of the following: +, -, *, or /: *
// 7 * 5 = 35

#include <iostream>

int main() {
	double a;
	double b;
	char operation;
	double result;

	std::cout << "Enter a double value: ";
	std::cin >> a;
	std::cout << "Enter a double value: ";
	std::cin >> b;
	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> operation;

	switch (operation) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	default:
		exit(1);
	}

	std::cout << a << " " << operation << " " << b << " = " << result << std::endl;
}