// Write a short program that simulates a ball falling from a tower.
// First, the user is prompted to enter the height of the tower in meters.
// Don’t forget to account for gravity (9.8 m/s²)
// and the fact that the ball has no initial velocity
// (it is being held in the user’s hand).
// The program should display the distance from the ground at which
// the ball is located after 0, 1, 2, 3, 4, and 5 seconds of falling.
// The minimum height is 0 meters (the ball cannot fall below this).

// Your program should include a header file named `constants.h`
// with the namespace `myConstants`.
// In `myConstants`, define a constant to store the value of Earth's
// gravitational acceleration (9.8). 

// Write a function to calculate the height of a ball after
// x seconds of falling. Use the following formula:
// height of the ball above the ground = gravitational_constant * x_seconds²/2.

// Example of the program's output:

// Enter the initial height of the tower in meters: 100
// At 0 seconds, the ball is at height: 100 meters
// At 1 seconds, the ball is at height: 95.1 meters
// At 2 seconds, the ball is at height: 80.4 meters
// At 3 seconds, the ball is at height: 55.9 meters
// At 4 seconds, the ball is at height: 21.6 meters
// At 5 seconds, the ball is on the ground.

#include <iostream>
#include "constants.h"

double calculate_ball_height(double seconds, double inital_height) {
	return inital_height - ((my_constants::G * seconds * seconds) / 2);
};

void print_result(double sec, double res) {
	if (res > 0.0) {
		std::cout << "At " << sec << " seconds, the ball is at height: " << res << " meters" << std::endl;

		return;
	}

	std::cout << "At 5 seconds, the ball is on the ground." << std::endl;
};

double get_initial_height() {
	double height;

	std::cout << "Enter the initial height of the tower in meters: ";
	std::cin >> height;

	return height;
}

int main() {
	double height = get_initial_height();

	const double t0 = 0;
	print_result(t0, calculate_ball_height(t0, height));

	const double t1 = 1;
	print_result(t1, calculate_ball_height(t1, height));

	const double t2 = 2;
	print_result(t2, calculate_ball_height(t2, height));

	const double t3 = 3;
	print_result(t3, calculate_ball_height(t3, height));

	const double t4 = 4;
	print_result(t4, calculate_ball_height(t4, height));

	const double t5 = 5;
	print_result(t5, calculate_ball_height(t5, height));
};
