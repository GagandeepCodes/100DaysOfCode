
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string final = "";
        string temp = strs[0];
        for(int i=0;i<temp.length();i++){
            for(int j=0;j<strs.size();j++){
                if(temp[i]!=strs[j][i]){
                    return final;
                }
            }
            final.push_back(temp[i]);
        }
        return final;
    }
};
int main()
{
    
    return 0;
}