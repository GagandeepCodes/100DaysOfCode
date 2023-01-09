#include<bits/stdc++.h>
using namespace std;

bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        map<char,char> str1tostr2;
        map<char,char> str2tostr1;
        
        //mapping str1
        for(int i=0;i<str1.size();i++){
            str1tostr2[str1[i]] = str2[i];
        }
        
        for(int i=0;i<str2.size();i++){
            if(str1tostr2[str1[i]] !=str2[i]){
                return false;
            }
        }
        
        //mapping str2
        for(int i=0;i<str2.size();i++){
            str2tostr1[str2[i]] = str1[i];
        }
        
        for(int i=0;i<str1.size();i++){
            if(str2tostr1[str2[i]] !=str1[i]){
                return false;
            }
        }
        
        return true;
    }

int main()
{
    
    return 0;
}