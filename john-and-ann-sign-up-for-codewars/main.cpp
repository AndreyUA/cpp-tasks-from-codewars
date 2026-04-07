// John and his wife Ann have decided to go to Codewars.
// On the first day Ann will do one kata and John - he wants to know
// how it is working - 0 kata.

// Let us call a(n) - and j(n) - the number of katas
// done by Ann - and John - at day n.
// We have a(0) = 1 and in the same manner j(0) = 0.

// They have chosen the following rules:

// - On day n the number of katas done by Ann should be
// n minus the number of katas done by John at day t,
// t being equal to the number of katas done by Ann herself at day n - 1

// - On day n the number of katas done by John
// should be n minus the number of katas done by Ann at day t,
// t being equal to the number of katas done by John himself at day n - 1

// Whoops! I think they need to lay out a little clearer
// exactly what there're getting themselves into!

// Could you write:

// - functions ann(n) and john(n) that return
// the list of the number of katas Ann/John does on the first n days;
// - functions sum_ann(n) and sum_john(n) that return
// the total number of katas done by Ann/John on the first n days

// Examples:

// john(11)  -->  [0, 0, 1, 2, 2, 3, 4, 4, 5, 6, 6]
// ann(6)    -->  [1, 1, 2, 2, 3, 3]

// sum_john(75)  -->  1720
// sum_ann(150)  -->  6930

#include <iostream>
#include <vector>
#include <numeric>

class Johnann {
	static std::vector<long long> total_john;
	static std::vector<long long> total_ann;

	static void init_data() {
		if (!total_john.empty() && !total_ann.empty()) {
			return;
		}

		total_john.push_back(0);
		total_ann.push_back(1);
	};

	static std::vector<long long> get_current_john_progress(long long n) {
		init_data();

		if (total_john.size() >= n) {
			std::vector<long long> result_vec(total_john.begin(), total_john.begin() + n);
		
			return result_vec;
		}

		for (int i = total_john.size(); i < n; i++) {
			long long new_number_for_ann = n - total_john[total_ann[n - 1]];
			total_ann.push_back(new_number_for_ann);


			long long new_number_for_john = n - total_ann[total_john[n - 1]];
			total_john.push_back(new_number_for_john);
		}

		std::vector<long long> result_vec(total_john.begin(), total_john.begin() + n);
		
			for (auto &&i : total_john) {
			std::cout << "john i: " << i << std::endl;
		}

		for (auto &&i : total_ann) {
			std::cout << "ann i: " << i << std::endl;
		}

		return result_vec;
	};

	static std::vector<long long> get_current_ann_progress(long long n) {
		init_data();
		
		if (total_ann.size() >= n) {
			std::vector<long long> result_vec(total_ann.begin(), total_ann.begin() + n);
			
			return result_vec;
		}
		
		for (int i = total_ann.size(); i < n; i++) {
			long long new_number_for_john = n - total_ann[total_john[n - 1]];
			total_john.push_back(new_number_for_john);


			long long new_number_for_ann = n - total_john[total_ann[n - 1]];
			total_ann.push_back(new_number_for_ann);
		}

		std::vector<long long> result_vec(total_ann.begin(), total_ann.begin() + n);
		
		return result_vec;
	};

	static long long get_current_sum_of_john(long long n) {
		init_data();
		
		long long result = std::accumulate(total_john.begin(), total_john.begin() + n, 0);

		return result;
	}

	static long long get_current_sum_of_ann(long long n) {
		init_data();

		long long result = std::accumulate(total_ann.begin(), total_ann.begin() + n, 0);
		
		return result;
	}

public:
    static std::vector<long long> john(long long n) {
		return get_current_john_progress(n);
	};

    static std::vector<long long> ann(long long n) {
		return get_current_ann_progress(n);
	};

    static long long sumJohn(long long n) {
		return get_current_sum_of_john(n);
	};

    static long long sumAnn(long long n) {
		return get_current_sum_of_ann(n);
	};
};

std::vector<long long> Johnann::total_john;
std::vector<long long> Johnann::total_ann;

int main() {
	Johnann::john(2);
	// TODO:
	// std::cout << Johnann::john(11) << " --> [0, 0, 1, 2, 2, 3, 4, 4, 5, 6, 6]" << std::endl;
	// std::cout << Johnann::ann(6) << " --> [1, 1, 2, 2, 3, 3]" << std::endl;
	// std::cout << Johnann::sumJohn(75) << " --> 1720" << std::endl;
	// std::cout << Johnann::sumAnn(150) << " --> 6930" << std::endl;
}
