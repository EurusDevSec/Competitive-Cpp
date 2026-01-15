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

    // method 2:
    bool isPalindrome(string s) {
      string t = "";
        for (char c: s) {
            if (std::isalnum(c)) {


                t+=std::tolower(c);
            }
        }

        int left = 0;
        int right = t.length()-1;
        while (left < right) {
            if (t[left] != t[right]) return  false;
            else {
                left ++;
                right --;
            }


        }
        return  true;
    }


};



int main() {
    Solution solution;
    string s = "A man, a plan, a canal: Panama";
    if (solution.isPalindrome(s)) {
        cout<<"true";

    }
    else cout<<"false";

    return 0;
}