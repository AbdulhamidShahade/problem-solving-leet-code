//Author: Abdulhamid Shahade
//Created: Set 7, 2024
//Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

	int k = 1;

	for (int i = 1; i < nums.size(); ++i) {

		if (nums[i] != nums[i - 1]) {

			++k;
		}
		else {

			nums.erase(nums.begin() + i);
			--i;
		}
	}

	return k;
}

int main() {

	int size = 0;
	cin >> size;

	vector<int> test(size);

	for (int i = 0; i < size; ++i) {

		cin >> test[i];
	}

	cout << removeDuplicates(test) << endl;

	for (int i : test) {

		cout << i << " ";
	}

	return 0;
}