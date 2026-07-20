#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); 

        int maxLen = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();

                if (st.empty()) {
                    st.push(i); 
                } else {
                    maxLen = max(maxLen, i - st.top());
                }
            }
        }

        return maxLen;
    }
};

int main() {
    
    Solution obj;
    
    string str;
    getline(cin,str);
    
    cout<<obj.longestValidParentheses(str);
    
    return 0;
}
