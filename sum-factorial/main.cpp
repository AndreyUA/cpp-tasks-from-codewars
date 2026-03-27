// Factorials are often used in probability and
// are used as an introductory problem for looping constructs.
// In this kata you will be summing together multiple factorials.

// Here are a few examples of factorials:

// 4 Factorial = 4! = 4 * 3 * 2 * 1 = 24
// 6 Factorial = 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720

// In this kata you will be given a list of values
// that you must first find the factorial, and then return their sum.

// For example if you are passed the list [4, 6]
// the equivalent mathematical expression would be 4! + 6! which would equal 744.

#include <iostream>
#include <vector>
#include <numeric>

unsigned long long int sum_factorial(std::vector<int> vi) {
	std::vector<std::vector<int>> total_numbers;

	for (size_t i = 0; i < vi.size(); i++) {
		total_numbers.push_back(std::vector<int>());

		for (size_t j = 1; j <= vi[i]; j++) {
			total_numbers[i].push_back(j);
		}
	}

	int sum = 0;

	for (auto &&i : total_numbers) {
		sum += std::accumulate(i.begin(), i.end(), 1, std::multiplies<int>());
	}

	return sum;
};

int main() {
	unsigned long long int test1 = sum_factorial({4, 6});
	std::cout << test1 << " - 744" << std::endl;

	unsigned long long int test2 = sum_factorial({4, 5, 1});
	std::cout << test2 << " - 145" << std::endl;
};