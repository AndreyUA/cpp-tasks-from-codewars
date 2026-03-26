// Modify the program from Assignment #2
// so that it uses the io.h header file to access functions
// (instead of using forward declarations).
// Make sure your header file uses header guards.

#include <utility>
#include "io.h"

using namespace std;

int main() {
	pair<int, int> numbers = readNumber();

	writeAnswer(numbers.first + numbers.second);
};