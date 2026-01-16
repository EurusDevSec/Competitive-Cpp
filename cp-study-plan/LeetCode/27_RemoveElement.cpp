//
// Created by ACER on 16/01/2026.
//

#include  <bits/stdc++.h>

using namespace  std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int fast =0;
        int slow =0;
        for (fast;fast< nums.size();++fast) {
            if (nums[fast] != val) {
                nums[slow] = nums[fast];
                slow ++;
            }
        }
        return slow;
    }
};

int main() {
    Solution solution;
    vector<int>nums = {0,1,2,2,3,0,4,2};

    int val = 2;
    cout<<solution.removeElement(nums,val);

    return 0;
}