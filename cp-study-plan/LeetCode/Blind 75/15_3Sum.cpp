//
// Created by ACER on 15/01/2026.
//

#include<bits/stdc++.h>

using namespace  std;


class  Solution {

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = 0;

        vector<vector<int>> final_res;
        int x;
        int l,r;
        for (int i=0;i< nums.size();++i) {
            x = nums[i];
            l = i+1;
            r = nums.size() -1;
            if (i>0 && nums[i-1] == nums[i]) {
                continue;
            }
            while (l < r) {
                s= nums[l] + nums[r];
                if (s == (-x)) {
                    final_res.push_back({x, nums[l], nums[r]});
                    l++;
                    r--;
                    while (l<r && nums[l-1] == nums[l]) l++;
                    while (l<r && nums[r+1] == nums[r]) r--;
                }
                else if (s < (-x)) {
                    l++;
                }
                else r--;
            }

        }



    return final_res;
    }
};


int main() {
    Solution solution;
    vector<int>nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>final_res = solution.threeSum(nums);


    cout<<"["<<"\n";
    for (int i=0;i< final_res.size();++i) {
        cout<<"[";
        for (int j=0;j<final_res[i].size();++j) {
            cout<<final_res[i][j]<<(j==final_res[i].size()-1 ? "" : ", ");
        }
        cout<<"]"<<(i==final_res.size()-1 ? "" : ", " )<<"\n";
    }
    cout<<"]"<<"\n";

    return 0;
}