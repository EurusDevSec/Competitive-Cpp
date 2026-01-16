//
// Created by ACER on 16/01/2026.
//

#include  <bits/stdc++.h>
using namespace  std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {

        int n;
        cin>>n;
        vector<int>nums;
        for (int i=0;i<n;i++) {
            int x;
            cin>>x;
            nums.push_back(x);
        }

        int l = 0, r = nums.size()-1;

        while (l<=r) {
          if (l==r) {
              cout<<nums[l];
          }

            else {
                cout<<nums[l]<<" "<<nums[r]<<" ";
            }
            l++;
            r--;

        }
        cout<<"\n";

    }
    return 0;
}