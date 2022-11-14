#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int l1 = a.length();
        int l2 = b.length();
        stack <char> st;
        int carry = 0;
        string final;
        for(int i=0 ,j=0;i<l1 && j<l2;i++,j++){
            if(a[i] == 0 && b[j] == 0){
                if(carry == 0)
                    st.push('0');
                else
                {
                    st.push('1');
                    carry = 0;
                }
            }
            else if((a[i] == 0 && b[j] == 1) || (a[i] == 1 && b[i] == 0)){
                if( carry == 0)
                    st.push('1');
                else
                {
                    st.push('0');
                    carry = 1;
                }
            }
            else
            {
                carry  = 1;
                st.push('0');
            }
        }
        if(carry == 1){
            st.push(1);
        }
        char top;
        for(int i=0;i<st.size();i++){
            top = st.top();
            st.pop();
            final.push_back(top);
        }
        return final;
    }
};
int main()
{

}