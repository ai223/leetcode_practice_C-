// LongestSubstring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
	// dvdf
	string maxString = s.substr(0, 1);
	string addString("");
	int i = 0;
	while (i < s.size()) {
		if (addString.find(s[i]) == -1)
			addString += s[i++];
		else {
			if (maxString.size() < addString.size())
				maxString = addString;
			i = i - addString.size() + 1;
			addString = "";
		}
	}

	if (addString.size() > maxString.size()) {
		cout << "addString: " << addString << endl;
		return addString.size();
	}
		cout << "maxString: " << maxString << endl;
	return maxString.size();

}

int main()
{
	string str = "abc";
	int ret = lengthOfLongestSubstring(str);
	cout << "ret: " << ret << endl;

	int wait;
	cin >> wait;

    return 0;
}