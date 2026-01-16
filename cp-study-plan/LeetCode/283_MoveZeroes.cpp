//
// Created by ACER on 16/01/2026.
//

#include <bits/stdc++.h>

using   namespace  std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast =0;
        int slow = 0;

        for (fast;fast< nums.size();++fast) {
            if (nums[fast] != 0) {
                swap(nums[fast], nums[slow]);
                slow++;
            }
        }
        for (int i=0;i<nums.size();++i) cout<<nums[i]<<(i == nums.size()-1 ? "" : ",");

    }
};

int main() {

    Solution solution;
    vector<int>nums = {0,1,0,3,12};

    solution.moveZeroes(nums);

    return 0;
}