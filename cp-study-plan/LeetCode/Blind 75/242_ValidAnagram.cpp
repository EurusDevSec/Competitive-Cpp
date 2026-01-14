//
// Created by ACER on 14/01/2026.
//

#include <bits/stdc++.h>

using namespace  std;

class Solution {


public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        else {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());


        }
        return s==t;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;
    string s = "rat";
    string t = "car";
    if (solution.isAnagram(s,t)) {
        cout<<"true";
    }
    else{cout<<"false";}

}