//Author: Abdulhamid Shahade
//Created: Sep 08, 2024
//Problem Link: https://leetcode.com/problems/remove-element/description/


#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {

	int k = 0;

	for (int i = 0; i < nums.size(); ++i) {

		if (nums[i] == val) {

			nums.erase(nums.begin() + i);
			--i;
		}
		else {

			++k;
		}
	}

	return k;
}

int main() {

	int n = 0, val = 0;
	cin >> n;

	vector<int> nums(n);

	for (int i = 0; i < n; ++i) {
		
		cin >> nums[i];
	}

	cin >> val;

	int k = removeElement(nums, val);

	cout << k << endl;

	for (int i : nums) {

		cout << i << " ";
	}

	return 0;
}