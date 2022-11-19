#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        char c;
        int j =s.length()-1;
        int n = s.length();
        int k = n-1;
        for(int i=n-1;i<s.length();i--){
            if(s[i]==' '){
                k--;
                cout<<"hello"<<endl;
            }
            else{
                break;
            }
        }
        for(int i=k;i<s.length();i--){
            if(s[i]!=' '){
                j--;
            }
            else break;
        }
        j++;
        int cnt = 0;
        for(int i=j;i<s.length();i++){
            cnt++;
        }

        return cnt;       
    }
};
int main()
{
    
    return 0;
}