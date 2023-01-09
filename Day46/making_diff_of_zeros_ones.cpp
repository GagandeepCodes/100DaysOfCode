#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int currsum=0;
	    int maxsum = INT_MIN;
	    for(int i=0;i<S.length();i++){
	        if(S[i]=='0'){
	            currsum+=1;
	        }
	        else
	        {
	            currsum+= -1;
	        }
	        maxsum = max(maxsum,currsum);
	        if(currsum<0){
	            currsum=0;
	        }
	    }
	    return maxsum;
	}
};
int main()
{
    
    return 0;
}