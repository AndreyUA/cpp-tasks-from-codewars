// Given three arrays of integers,
// return the sum of elements that are common in all three arrays.

// For example:
// common([1,2,3],[5,3,2],[7,3,2]) = 5 because 2 & 3 are common in all 3 arrays
// common([1,2,2,3],[5,3,2,2],[7,3,2,2]) = 7 because 2,2 & 3 are common in the 3 arrays

#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

int common(std::vector<int> a, std::vector<int> b, std::vector<int> c) {
    std::vector<int> vec, other;
  
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    std::sort(c.begin(),c.end());

    std::set_intersection(
		a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(vec)
	);

    std::set_intersection(
		vec.begin(), vec.end(), c.begin(), c.end(), std::back_inserter(other)
	);

   	return std::accumulate(other.begin(), other.end(), 0);
}

int main() {
	std::cout << common(std::vector<int>{1,2,3}, std::vector<int>{5,3,2},std::vector<int>{7,3,2}) << std::endl;
	std::cout << common(std::vector<int>{1,2,2,3},std::vector<int>{5,3,2,2},std::vector<int>{7,3,2,2}) << std::endl;
}