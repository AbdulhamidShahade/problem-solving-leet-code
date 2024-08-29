//Author: Abdulhamid Shahade
//Created: Aug 29, 2024
//Problem Link: https://codeforces.com/problemset/problem/4/A


#include<iostream>
using namespace std;

bool isPalindrome(int x) {

	int temp = x;

	if (x < 0) {

		return false;
	}

	int res = x % 10;
	x /= 10;

	while (x != 0) {

		res = res * 10 + (x % 10);

		x /= 10;
	}

	return temp == res;
}


long long readNumber() {

	long long number = 0x0LL;
	cin >> number;

	return number;
}

int main() {

	long long x = readNumber();

	cout << isPalindrome(x) << endl;

	return 0;
}