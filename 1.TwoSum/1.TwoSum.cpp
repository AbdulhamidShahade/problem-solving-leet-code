//Author: Abdulhamid Shahade
//Created: Aug 28, 2024
//Problem Link: https://leetcode.com/problems/two-sum/description/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Pair {

	int value;
	int index;
};

bool comparePairs(const Pair& a, const Pair& b) {
	return a.value < b.value;
}


pair<int, int> findIndices(vector<Pair>& destination, int target) {

	int l = 0;
	int r = destination.size() - 1;

	while (l < r) {

		int res = destination[l].value + destination[r].value;

		if (res == target) {

			return { destination[l].index, destination[r].index };
		}

		else if (res < target) {

			l++;
		}

		else {
			
			r--;
		}
		
	}

	return { 0, 0 };
}

void sortVector(vector<Pair>& destination) {

	sort(destination.begin(), destination.end(), comparePairs);
}

void flagWithIndex(vector<Pair>& destination) {

	for (int i = 0; i < destination.size(); ++i) {

		destination[i].index = i;
	}
}

void copyVector(vector<int> source, vector<Pair>& destination) {

	for (int i = 0; i < source.size(); ++i) {

		destination[i].value = source[i];
	}
}

vector<int> twoSum(vector<int>& nums, int target) {

	vector<Pair> copiedNums(nums.size());

	copyVector(nums, copiedNums);

	flagWithIndex(copiedNums);

	sortVector(copiedNums);

	pair<int, int> result = findIndices(copiedNums, target);

	return { result.first, result.second };
}

int main() {

	vector<int> in{2, 7, 11, 15};

	vector<int> result = twoSum(in, 9);

	cout << "[" << result[0] << ", " << result[1] << "]" << endl;

	return 0;
}