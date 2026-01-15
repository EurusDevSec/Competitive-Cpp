//
// Created by ACER on 15/01/2026.
//
#include  <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
      string s = to_string(x);
        int l = 0;
        int r = s.size()-1;
        while (l < r) {
            if (s[l] != s[r]) return  false;
            l++;
            r--;
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;
    int x = 121;
    auto res = solution.isPalindrome(x);
    if (res) cout<<"true";
    else cout<<"false";

    return 0;
}