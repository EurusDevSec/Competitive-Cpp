//
// Created by ACER on 22/01/2026.
//

#include <bits/stdc++.h>
using namespace  std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l = 0;
        int r = s.size()-1;
        int cnt =0;
        while (l <= r) {
            if (s[l] != s[r]) {
                l++;
                r--;
            }
            else {
                cnt = r-l + 1;
                break;
            }
        }
        cout<<cnt<<"\n";
    }
        return  0;
}