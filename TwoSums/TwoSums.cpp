// TwoSums.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> retVector;
	int i(0), j(1);
	while (i < nums.size()) {
		if (nums[i] + nums[j] == target) {
			retVector.push_back(i);
			retVector.push_back(j);
			return retVector;
		}
		else if (j == nums.size() - 1)  // not found yet
			j = ++i;
		j++;
	}  // end while
}

vector<int> twoSum2(vector<int>& nums, int target) {
	vector<int> retVector;
	map<int, int> values;

	// add first element
	values[target - nums[0]] = 0;
	for (int i = 1; i < nums.size(); i++) {
		if (values.count(nums[i]) == 1) {
			retVector.push_back(values[nums[i]]);
			retVector.push_back(i);
			return retVector;
		}
		else
			values[target - nums[i]] = i;
	}  // end for

}


int main()
{
	vector<int> inputVector = {-3, 4, 3, 90};
	                         // 3 -4 -3 -90

	int target = 0;
	vector<int> ret = twoSum2(inputVector, target);
	cout << ret[0] << "\n";
	cout << ret[1] << "\n";


	int wait;
	cin >> wait;

    return 0;
}

class Solution {
public:

};