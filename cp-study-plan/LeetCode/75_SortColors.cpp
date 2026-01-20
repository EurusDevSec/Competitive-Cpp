//
// Created by ACER on 20/01/2026.
//

#include <bits/stdc++.h>

using namespace  std;


class Solution {
public:
    void sortColors(vector<int>& nums) {

        int low =0, high = (int)nums.size()-1, curr=0;
        while (curr <=high) {
            if (nums[curr] == 0) {
                swap(nums[curr], nums[low]);
                low++;
                curr++;
            }
            else if (nums[curr]==2) {
                swap(nums[curr], nums[high]);
                high--;

            }
            else if (nums[curr] ==1) {
                curr++;
            }
        }


    }
};

int main() {

    Solution solution;
    vector<int>nums ={2,0,2,1,1,0};
    solution.sortColors(nums);
    for (int i=0;i<nums.size();i++) {
        cout<<nums[i]<<(i==nums.size()-1 ? "" : ",");
    }
    return 0;
}