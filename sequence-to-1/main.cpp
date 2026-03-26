// Task
// Given the number n, return the sequence of numbers from n to 1.

// Range
// The number n can be negative and also large number:  -9999  <=  n  <=  9999

// Examples
// n =  5    >>     5, 4, 3, 2, 1
// n = -1    >>    -1, 0, 1

#include <iostream>
#include <vector>

std::vector<int> seqToOne(int n) {
    std::vector<int> result;
  
	if (n > 0) {
		for (int i = n; i >= 1; i--) {
		  result.push_back(i);
		};
	} else {
		for (int i = n; i <= 1; i++) {
		  result.push_back(i);
		};
	}
  
    return result;
}

int main() {
	std::vector<int> result_5 = seqToOne(5);
	std::vector<int> result_minus_1 = seqToOne(-1);

	for (auto &&item : result_5) {
		std::cout << item << std::endl;
	}

	std::cout << "----------------------" << std::endl;

	for (auto &&item : result_minus_1) {
		std::cout << item << std::endl;
	}
};