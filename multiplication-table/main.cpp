// Your task, is to create N×N multiplication table, of size provided in parameter.

// For example, when given size is 3:
// 1 2 3
// 2 4 6
// 3 6 9

// For the given example, the return value should be:
// [[1,2,3],[2,4,6],[3,6,9]]

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplication_table(int n){
	vector<int> initial_arr;
	vector<vector<int>> result_arr;

	for (auto i = 1; i < n + 1; i++)
	{
		initial_arr.push_back(i);
	};

	for (auto i = 1; i < n + 1; i++)
	{
		if (i == 1) {
			result_arr.push_back(initial_arr);

			continue;
		};

		vector<int> current_iteration_arr;

		for (auto &&item : initial_arr)
		{
			current_iteration_arr.push_back(item * i);
		};
		
		result_arr.push_back(current_iteration_arr);
	};

	return result_arr;
};

int main() {
	multiplication_table(3);
}