//Author: Abdulhamid Shahade
//Created: Aug 30, 2024
//Problem Link: https://leetcode.com/problems/longest-common-prefix/description/


#include<iostream>
#include<vector>
using namespace std;

int FindMinimumLengthIntInArray(vector<string>& strs)
{
    int min = INT_MIN;

    for(string str : strs)
    {
        if (str.length() < min)
        {
            min = str.length();
        }
    }

    return min;
}

string longestCommonPrefix(vector<string>& strs) {

    int minStr = FindMinimumLengthIntInArray(strs);
    string res = "";
    int i = 0, j = 0;
    bool con = true;
    for (i = 0; i < minStr; ++i)
    {
        char c = strs[0][i];
        for (j = 0; j < strs.size(); ++j)
        {
            if (strs[j][i] != c)
            {
                con = false;
                break;
            }


        }
        if (con)
            res += strs[j - 1][i];
        else
        {
            break;
        }
    }

    return res;
}

int main() {

    vector<string> strs = { "flower", "flow", "flight" };

    cout << longestCommonPrefix(strs) << endl;

    return 0;
}
