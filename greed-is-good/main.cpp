// Greed is a dice game played with five six-sided dice.
// Your mission, should you choose to accept it,
// is to score a throw according to these rules.
// You will always be given an array with five six-sided dice values.

// Three 1's => 1000 points
// Three 6's =>  600 points
// Three 5's =>  500 points
// Three 4's =>  400 points
// Three 3's =>  300 points
// Three 2's =>  200 points
// One   1   =>  100 points
// One   5   =>   50 point

// Each of 5 dice can only be counted once in each roll.
// For example, a given "5" can only count as part of
// a triplet (contributing to the 500 points) or as a single 50 points,
// but not both in the same roll.

// Example scoring:

// Throw       Score
// ---------   ------------------
// 5 1 3 4 1   250:  50 (for the 5) + 2 * 100 (for the 1s)
// 1 1 1 3 1   1100: 1000 (for three 1s) + 100 (for the other 1)
// 2 4 4 5 4   450:  400 (for three 4s) + 50 (for the 5)

#include <iostream>
#include <array>

int score(const std::array<unsigned, 5>& dice) {
	int result = 0;

	// Three 1's => 1000 points
	// One   1   =>  100 points
	int number_of_1 = 0;
	
	for (auto &&i : dice) {
		if (i == 1) {
			++number_of_1;
		};
	}

	if (number_of_1 > 0 && number_of_1 < 3) {
		result += number_of_1 * 100;
	}

	if (number_of_1 == 3) {
		result += 1000;
	}

	if (number_of_1 > 3) {
		result += 1000 + ((number_of_1 - 3) * 100);
	}

	// Three 6's =>  600 points
	int number_of_6 = 0;

	for (auto &&i : dice) {
		if (i == 6) {
			++number_of_6;
		}
	}

	if (number_of_6 >= 3) {
		result += 600;
	}
	
	// Three 5's =>  500 points
	// One   5   =>   50 point
	int number_of_5 = 0;

	for (auto &&i : dice) {
		if (i == 5) {
			++number_of_5;
		}
	}
	
	if (number_of_5 > 0 && number_of_5 < 3) {
		result += number_of_5 * 50;
	}

	if (number_of_5 == 3) {
		result += 500;
	}

	if (number_of_5 > 3) {
		result += 500 + ((number_of_5 - 3) * 50);
	}

	// Three 4's =>  400 points
	int number_of_4 = 0;

	for (auto &&i : dice) {
		if (i == 4) {
			++number_of_4;
		}
	}

	if (number_of_4 >= 3) {
		result += 400;
	}

	// Three 3's =>  300 points
	int number_of_3 = 0;

	for (auto &&i : dice) {
		if (i == 3) {
			++number_of_3;
		}
	}

	if (number_of_3 >= 3) {
		result += 300;
	}

	// Three 2's =>  200 points
	int number_of_2 = 0;

	for (auto &&i : dice) {
		if (i == 2) {
			++number_of_2;
		}
	}

	if (number_of_2 >= 3) {
		result += 200;
	}

	return result;
}

int main() {
	std::array<unsigned, 5> dice_one = {4, 4, 4, 3, 3};
    std::cout << score(dice_one) << " - 400" << std::endl; // 400
	
	std::array<unsigned, 5> dice_two = {2, 4, 4, 5, 4};
    std::cout << score(dice_two) << " - 450" << std::endl; // 450

	std::array<unsigned, 5> dice_three = {2, 3, 4, 6, 2};
    std::cout << score(dice_three) << " - 0" << std::endl; // 0

	std::array<unsigned, 5> dice_four = {2, 2, 2, 3, 3};
    std::cout << score(dice_four) << " - 200" << std::endl; // 200

	std::array<unsigned, 5> dice_five = {2, 2, 2, 2, 3};
    std::cout << score(dice_five) << " - 200" << std::endl; // 200

	std::array<unsigned, 5> dice_six = {2, 2, 2, 2, 2};
    std::cout << score(dice_six) << " - 200" << std::endl; // 200

	std::array<unsigned, 5> dice_seven = {3, 3, 3, 5, 5};
    std::cout << score(dice_seven) << " - 400" << std::endl; // 400

	std::array<unsigned, 5> dice_eight = {4, 5, 2, 2, 2};
    std::cout << score(dice_eight) << " - 250" << std::endl; // 250
}