//
// Created by ACER on 14/01/2026.
//
#include <bits/stdc++.h>
#include<unordered_set>

using  namespace  std;
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         for (int i=0;i<nums.size();++i) {
//             for (int j=i+1;j<nums.size();++j) {
//                 if (nums[i] == nums[j]) {
//                     return true;
//                 }
//
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mySet;
        for (int i=0;i<nums.size();++i) {
            if (mySet.count(nums[i])) {
                return true;
            }
            mySet.insert(nums[i]);
        }
        return false;
    }
};


int main() {
    Solution solution;
    vector<int>nums={1,1,1,3,3,4,3,2,4,2};
    if (solution.containsDuplicate(nums)) {
       cout<<"true";
    }
    else cout<<"false";

    return 0;
}