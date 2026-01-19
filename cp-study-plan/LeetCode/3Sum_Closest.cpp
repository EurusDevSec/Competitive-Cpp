//
// Created by ACER on 19/01/2026.
//

#include <ios>
#include <bits/stdc++.h>

using namespace  std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort (nums.begin(), nums.end());
        int left,right;
        int closestSum = nums[0] + nums[1] + nums[2];
        for (int i=0;i<nums.size()-2;++i) {

            left =i+1;
            right= nums.size()-1;
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                if (abs(target - current_sum) < abs(target - closestSum)) {
                    closestSum  =current_sum;

                }
                if (current_sum < target) {
                    left ++;
                }
                else if (current_sum > target) {
                    right --;

                }
                else return  current_sum;

            }
        }
        return closestSum;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution solution;
    vector<int>nums = {-1,2,1,-4};
    int target = 1;
    int resutl = solution.threeSumClosest(nums,target);
    cout<<resutl;



}