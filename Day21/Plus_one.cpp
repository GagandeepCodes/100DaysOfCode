#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        stack <int> st;
        int carry = 0;
        for(int i=digits.size()-1;i>=0;i++){
            int num = digits[i] + 1 + carry;
            if(num>9){
                st.push(0);
                carry = 1;
            }
            else{
                st.push(num);
                carry = 0;
            }
        } 
        if(carry == 1){
            st.push(carry);
        }
        int x = st.size();
        for(int i=0;i<x;i++){
            int top = st.top();
            st.pop();
            digits[i] = top;
        }
        return digits;  
    }
};
int main()
{
    
    return 0;
}