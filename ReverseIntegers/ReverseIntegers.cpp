// ReverseIntegers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;

int reverseInt(int x) {

	long long ret = 0;
	int currInt = abs(x);
	int numDigits = 1 + floor(log10(currInt));
	int scale = pow(10, numDigits - 1);
	if (scale >= 1000000000 && (currInt % 10) > 2) 
		return 0;
	while (currInt > 0) {
		ret += (currInt % 10) * scale;
		currInt /= 10;
		scale /= 10;
	}
	if (ret > INT32_MAX || ret < INT32_MIN)
		return 0;

	return x > 0 ? ret : -1 * ret;
}

int main()
{
	int ans = reverseInt(1534236469);
	cout << ans << endl;

	int wait;
	cin >> wait;

    return 0;
}

// 1563847412
// -2147483412

