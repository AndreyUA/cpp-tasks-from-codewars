// Modify the program from Assignment #1
// so that the readNumber() and writeAnswer()
// functions are located in a separate file io.cpp.
// Use forward declarations to access these functions from the main() function.

#include <utility>

using namespace std;

pair<int, int> readNumber();
void writeAnswer(int result);

int main() {
	pair<int, int> numbers = readNumber();

	writeAnswer(numbers.first + numbers.second);
};