// You have a website and want to track how much money you earn
// each day from the ads displayed on it.
// Define an `Advertising` structure that will track:

//	- how many ads you showed to visitors (1);

// 	- what percentage of visitors clicked on the ads (2);

// 	- how much you earned on average for each ad click (3).

// The user must enter the values for these three fields.
// Pass the Advertising structure to a function that will
// output each of these values and then calculate
// how much money you earned in total for the day (multiply all 3 fields).

#include <iostream>

struct Advertising {
	int total_number_of_adv;
	double percentage_click;
	double average_income;
};

void print_adv_report(Advertising adv) {
	std::cout << adv.total_number_of_adv << std::endl;
	std::cout << adv.percentage_click << std::endl;
	std::cout << adv.average_income << std::endl;
	
	int total_number = adv.total_number_of_adv * adv.percentage_click / 100 * adv.average_income;
	
	std::cout << total_number << std::endl;
}

int main() {
	Advertising advertising = { 100, 20, 3 };

	print_adv_report(advertising);
}