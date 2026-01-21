//
// Created by ACER on 20/01/2026.
//
#include <bits/stdc++.h>
using  namespace std;



class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
// Use two pointer technique
        int i=0,j=1;
        int n = nums.size();
        while (i <n && j<n) {
            if (nums[i] %2==0) {
                i+=2;
                if (nums[j] %2!=0) {
                    j+=2;
                }
                else {
                    swap(nums[i], nums[j]);
                }
            }
            else if (nums[j] %2!=0) {

            }
        }

    }
};

int main() {
    Solution solution;



    return 0;
}