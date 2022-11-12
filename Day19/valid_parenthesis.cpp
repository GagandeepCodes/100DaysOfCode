#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            // int flag = -1;
            if(st.empty()){
                // flag = 1;
                st.push(s[i]);
            }
            // char top = st.peek();
            char top = st.top();
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                // if(flag==0)
                st.push(s[i]);
                char top = st.top();
                flag = 0;
            }
            else if((s[i] == ')' && top == '(') || (s[i] == ']' && top == '[') || (s[i] == '}' && top == '{')){
                st.pop();
            }
            else{
                return false;
            }        
        }
        return true;
    }
};
int main()
{
    
    return 0;
}