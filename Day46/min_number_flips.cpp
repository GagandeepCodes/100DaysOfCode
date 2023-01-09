#include<bits/stdc++.h>
using namespace std;
int minFlips (string S)
{
    // your code here
    int evenOne = 0;
    int oddOne = 0;
    for(int i=0;i<S.length();i++){
        if(i%2==0 && S[i]=='1' || i%2!=0 && S[i]=='0'){
            evenOne++;
        }
    }
    for(int i=0;i<S.length();i++){
        if(i%2!=0 && S[i]=='1' || i%2==0 && S[i]=='0'){
            oddOne++;
        }
    }
    
    return min(evenOne,oddOne);
}
int main()
{
    
    return 0;
}