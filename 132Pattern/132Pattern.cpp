// 132Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

//bool solution1(vector<int> arr) {
//	int i(0), j(1), k(2);
//	int arrSize = arr.size();
//	while (i < arr.size() - 2) {
//
//		// loop through k only
//		while (k < arrSize) {
//			if (arr[i] < arr[k] && arr[k] < arr[j]) { 
//				cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]";
//				return true; }
//			k++;
//		}  // end inner while
//		
//		// move k back one spot
//		k = arrSize - 1;
//
//		// loop through j only
//		while (j < arr.size()) {
//			if (arr[i] < arr[k] && arr[k] < arr[j]) { 
//				cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]";
//				return true;
//			}
//			j++;
//		}  // end inner while
//
//		// move j back one spot
//		j = arrSize - 1;
//
//		// reset variables
//		if ((k == arrSize - 1) && (j == arrSize - 1)) {
//			i += 1;
//			j = i + 1;
//			k = i + 2;
//		}  // end if
//
//	}  // end outer while
//
//	return false;
//}

bool solution2(vector<int> nums) {
	return true;
}

int main()
{
	vector<int> iVec = { -1, 0, 5, 8, 2, 1 };
	//bool ans = solution1(iVec);
	//cout << ans;

	int wait;
	cin >> wait;

    return 0;
}

