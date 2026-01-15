//
// Created by ACER on 15/01/2026.
//

#include <bits/stdc++.h>

using namespace  std;


class Solution {
public:
    void reverseString(vector<char>& s) {
       int left = 0;
       int right = s.size() -1;

        while (left < right) {


            swap(s[left], s[right]);
            left++;
            right--;


        }
        for (char c: s) {
            cout<<c<<", ";
        }
    }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution solution;
    vector<char>s={'h', 'e', 'l', 'l', 'o'} ;
    solution.reverseString(s);
}