// 4Sum II.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <unordered_map>
#include <vector>

using std::unordered_map;		using std::cout;
using std::vector;				


/*

Given four lists A, B, C, D of integer values, compute how many tuples (i, j, k, l) there are such that A[i] + B[j] + C[k] + D[l] is zero.

To make problem a bit easier, all A, B, C, D have same length of N where 0 ≤ N ≤ 500. All integers are in the range of -228 to 228 - 1 
and the result is guaranteed to be at most 231 - 1.

*/

int fourSumCount(vector<int>&, vector<int>&, vector<int>&, vector<int>&);

int main()
{
	int numTuples = 0;
	vector<int> A{ -2, -1 };
	vector<int> B{ -1, 1 };
	vector<int> C{ -1, -2 };
	vector<int> D{ 1, -1 };

	int ret = fourSumCount(A, B, C, D);
	cout << "Ret: " << ret << '\n';

    return 0;
}

// time complexity: O(N^2)
int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
	int numTuples = 0;
	unordered_map<int,int> pairs;

	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < B.size(); j++) {
			int sum = (A[i] + B[j]);
			pairs.find(sum) == pairs.end() ? pairs[sum] = 1 : ++pairs[sum];
		}
	}

	for (int k = 0; k < C.size(); k++) {
		for (int h = 0; h < D.size(); h++) {
			int complement = 0 - (C[k] + D[h]);
			if (pairs.find(complement) != pairs.end())
				numTuples += pairs[complement];
		}
	}

	return numTuples;
}

