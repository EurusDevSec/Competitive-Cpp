//
// Created by ACER on 13/01/2026.
//

#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    for (int i =0; i< s.length();++i) {
        if (s[i] =='.') {
            cout<<0;
        }
        else if (s[i] == '-') {
            if (s[i+1] =='.') {
                cout<<"1";
                i=i+1;
            }
            else if (s[i+1]=='-') {
                cout<<"2";
                i=i+1;
            }
        }
    }

}