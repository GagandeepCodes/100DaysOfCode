#include<bits/stdc++.h>
using namespace std;
int Count(int L, int R){
		    // Code here
		    vector<bool> seive(R+1,true);
		    seive[0] = seive[1] = 0;
		    for(int i=2;i<=R;i++){
		        if(seive[i] ==1){
		            for(int j=2*i;j<=R;j+=i){
		                seive[j] = 0;
		            }
		        }
		    }
		    int prime = 0;
		    int cmp = 0;
		    for(int i=L;i<=R;i++){
		        if(i==1){
		            continue;
		        }
		        if(seive[i]==1){
		            prime++;
		        }
		        else
		        {
		            cmp++;
		        }
		    }
		    return cmp - prime;
		}

int main()
{
    
    return 0;
}