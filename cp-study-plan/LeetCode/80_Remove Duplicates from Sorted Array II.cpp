//
// Created by ACER on 16/01/2026.
//
#include <bits/stdc++.h>

using namespace std;

class Solution {

public:
    int removeDuplicates(vector<int>& nums) {
        int slow =2;
        int fast =2;
        int n = nums.size();
        if (n <= 2) return n;
        for (fast ;fast< n;++fast) {
            if (nums[fast] != nums[slow -2 ]) {
                nums[slow] = nums[fast];
                slow++;
            }
        }
        return slow;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution solution;
    vector<int>nums ={0,0,1,1,1,1,2,3,3};
    cout<<solution.removeDuplicates(nums);

    return 0;
}