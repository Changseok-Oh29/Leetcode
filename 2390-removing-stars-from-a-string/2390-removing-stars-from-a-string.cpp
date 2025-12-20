#include <stack>

class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for (int i=0;i<s.size();i++) {
            if (s[i] == '*') {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }

        stack<char> temp;
        while (!st.empty()) {
            temp.push(st.top());
            st.pop();
        }

        string result;
        while (!temp.empty()) {
            result.push_back(temp.top());
            temp.pop();
        }

        return result;

    }
};