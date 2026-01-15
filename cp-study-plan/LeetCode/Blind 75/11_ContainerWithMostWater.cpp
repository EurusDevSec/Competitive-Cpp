//
// Created by ACER on 15/01/2026.
//

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int area;
        int max_water = 0;

        while (l<r) {

            area = min(height[l], height[r]) * (r-l);
            if (area >= max_water) {
                max_water = area;
            }

            if (height[l] < height[r]) {
                l++;
            }
            else {
                r--;
            }


        }
            return max_water;
    }
};

int main() {
    Solution solution;
    vector<int>height = {1,8,6,2,5,4,8,3,7};

    cout<<solution.maxArea(height);
    return 0;
}