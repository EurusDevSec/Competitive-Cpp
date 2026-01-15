//
// Created by ACER on 15/01/2026.
//
#include<bits/stdc++.h>


using namespace  std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;

        while (left < right) {
            int s= numbers[left] + numbers[right];
            if (s == target) {
                return {left+1,right +1};
            }
            else if (s > target) {
                right--;
            }
            else if (s< target) {
                left ++;
            }

        }
        return {};
    }
};

int  main() {
    Solution solution;
    vector<int> numbers = {2,7,11,15};
    int target = 9;


    vector<int>result = solution.twoSum(numbers,target);
    for (int num:result) {
        cout<<num<<" ";
    }
    return 0;
}