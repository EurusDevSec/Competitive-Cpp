//
// Created by ACER on 15/01/2026.
//

#include <bits/stdc++.h>

using namespace std;

class  Solution {
public:
    // bool isPalindrome(string s) {
    //
    // string fw = remove_non_alpha(s);
    // string bw = fw;
    //     reverse(bw.begin(),bw.end());
    //     return fw == bw ;
    //
    //
    // }
    // string remove_non_alpha(string s) {
    //
    //     string t = "";
    //     for (char c : s) {
    //         if (std::isalnum(c)) {
    //             t+=std::tolower(c);
    //         }
    //     }
    //     return t;
    // }

};



int main() {
    Solution solution;
    string s = "0P";
    if (solution.isPalindrome(s)) {
        cout<<"true";

    }
    else cout<<"false";

    return 0;
}