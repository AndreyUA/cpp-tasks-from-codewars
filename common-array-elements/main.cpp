// Given three arrays of integers,
// return the sum of elements that are common in all three arrays.

// For example:
// common([1,2,3],[5,3,2],[7,3,2]) = 5 because 2 & 3 are common in all 3 arrays
// common([1,2,2,3],[5,3,2,2],[7,3,2,2]) = 7 because 2,2 & 3 are common in the 3 arrays

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int common(vector<int> a, vector<int> b, vector<int> c) {
	unordered_map<int, int> hash_map;

	for (auto &&i : a) {
		hash_map[i] = 1;
	}

	for (auto &&i : a) {
		vector<int>::iterator it = find(b.begin(), b.end(), i);

		if (it != b.end()) {
			hash_map[i] = hash_map[i] + 1;
		};
	}

	// vector a VS vector c
	for (auto &&i : a) {
		vector<int>::iterator it = find(c.begin(), c.end(), i);

		if (it != c.end()) {
			hash_map[i] = hash_map[i] + 1;
		};
	}

	int result = 0;

	for (const auto& item : hash_map) {
		if (item.second == 3) {
			result += item.first;
		}

		if (item.second > 3) {
			unordered_map<int, int>unordered_map_for_a;
			unordered_map<int, int>unordered_map_for_b;
			unordered_map<int, int>unordered_map_for_c;

			unordered_map_for_a[item.first] = 0;
			unordered_map_for_b[item.first] = 0;
			unordered_map_for_c[item.first] = 0;

			for (auto &&i : a) {
				if (i == item.first) {
					unordered_map_for_a[item.first] += 1;
				}
			}

			for (auto &&i : b) {
				if (i == item.first) {
					unordered_map_for_b[item.first] += 1;
				}
			}

			for (auto &&i : c) {
				if (i == item.first) {
					unordered_map_for_c[item.first] += 1;
				}
			}

			if (unordered_map_for_a[item.first] == unordered_map_for_b[item.first] && unordered_map_for_b[item.first] == unordered_map_for_c[item.first]) {
				result += item.first * unordered_map_for_a[item.first];
			}
		}
    }

	return result;
}

int main() {
	cout << common(vector<int>{1,2,3}, vector<int>{5,3,2},vector<int>{7,3,2}) << endl;
	cout << common(vector<int>{1,2,2,3},vector<int>{5,3,2,2},vector<int>{7,3,2,2}) << endl;
}