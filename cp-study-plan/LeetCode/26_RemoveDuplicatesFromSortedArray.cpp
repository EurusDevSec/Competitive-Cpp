//
// Created by ACER on 16/01/2026.
//

#include<bits/stdc++.h>

using namespace  std;

class Solution {

public:
    int removeDuplicates(vector<int>& nums) {
        int fast = 1;
        int slow =1;

        for (fast ;fast < nums.size();++fast) {
            if (nums[fast] != nums[fast-1]) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return  slow;
    }
};

int main() {

    Solution solution;
    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<(solution.removeDuplicates(nums));
    return 0;
}