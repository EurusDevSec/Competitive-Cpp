//
// Created by ACER on 14/01/2026.
//
#include <bits/stdc++.h>
using  namespace  std;


class Solution {

public:
    bool isValid(string s) {
        int left =0;
        int right = s.length()-1;
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;

        }
        return  true;
    }
};

int main() {
    Solution solution;
    string s = "()[]{}";
    if (solution.isValid(s)) {
        cout<<"true";
    }
    else cout<<"false";
}