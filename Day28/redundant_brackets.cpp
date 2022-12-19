#include <bits/stdc++.h>
using namespace std;
int checkRedundancy(string s)
{
    // code here
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                int flag = 1;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        flag = 0;
                    }
                    st.pop();
                }
                if (flag == 1)
                {
                    return 1;
                }
                st.pop();
            }
        }
    }
    return 0;
}
int main()
{

    return 0;
}