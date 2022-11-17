#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                break;
            }
            else if(i!=0)
            {
                digits[i] = 0;
            }
            else
            {
                ans.push_back(1);
                digits[i] = 0;
            }
        }
        
        for(int i=0;i<digits.size();i++)
        {
            ans.push_back(digits[i]);
        }
        
        return ans;
    }
int main()
{
    
    return 0;
}