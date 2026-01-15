//
// Created by ACER on 14/01/2026.
//
#include <bits/stdc++.h>
using  namespace  std;


class Solution {

public:
    bool isValid(string s) {
        stack<char> st;

        for (char c:s) {
            if (c ==  '(' || c== '[' || c == '{') {
                st.push(c);
            }
            else {
               if (st.empty()) return false;

                if ((c==')' &&  st.top() != '(') || (c==']'  && st.top() !='[') || (c =='}'  && st.top()!='{' )) {
                    return false;
                }
                st.pop();
            }
        }
    return st.empty();
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