//
// Created by ACER on 20/01/2026.
//
#include <bits/stdc++.h>

using  namespace  std;



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
            int low=0, high = nums.size()-1,curr=0;

            while (curr <= high) {
                if (nums[curr] % 2 !=0) {
                    swap(nums[curr], nums[high]);
                    high--;
                }
                else {
                    swap(nums[curr], nums[low]);
                    low++;
                    curr++;
                }
            }
        return nums;
    }
};



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution solution;
    vector<int>nums = {3,1,2,4};
    vector<int>res = solution.sortArrayByParity(nums);
    for (int x: res) {
        cout<<x<<" ";
    }

    return 0;
}