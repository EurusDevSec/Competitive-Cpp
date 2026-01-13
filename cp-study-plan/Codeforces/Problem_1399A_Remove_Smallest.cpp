//
// Created by ACER on 13/01/2026.
//

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(stdin);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> v;
        bool check = true;
        for (int i=0;i<n;i++) {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int i=0;i< n-1;++i) {
            if (v[i+1] - v[i] > 1) {
                check = false;
                break;
            }
            else check = true;
        }
        if (check) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}