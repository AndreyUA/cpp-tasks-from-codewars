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
