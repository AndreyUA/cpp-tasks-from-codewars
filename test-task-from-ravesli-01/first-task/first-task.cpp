// Write a single-file program (named main.cpp)
// that prompts the user for two integers,
// adds them together, and then prints the result.
// The program must contain 3 functions:

// - the readNumber() function, which prompts the user for an integer
// and then returns it to main();
// - the writeAnswer() function, which prints the result to the screen.
// The function must have no return value and only one parameter;
// - the main() function, which ties everything together.

// Hints:
// You don’t need to create a separate function to
// perform the addition operation (just use the + operator).
// The readNumber() function must be called twice.

#include <iostream>
#include <utility>

using namespace std;

pair<int, int> readNumber() {
	int first;
	int second;

	cout << "Enter first number" << endl;
	cin >> first;

	cout << "Enter second number" << endl;
	cin >> second;

	return make_pair(first, second);
};

void writeAnswer(int result) {
	cout << "Result of sum is: " << result << endl;
};

int main() {
	pair<int, int> numbers = readNumber();

	writeAnswer(numbers.first + numbers.second);
};