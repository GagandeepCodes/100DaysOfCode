#include<bits/stdc++.h>
using namespace std;
int findKRotation(int arr[], int n) {
	    // code here
	    int cnt =0;
	    for(int i=0;i<n;i++){
	        cnt++;
	       // cout<<cnt<<" "<<i<<endl;
	        if(i<n-1 && arr[i]>arr[i+1]){
	            return cnt;
	        }
	        if(i== (n-1) && (cnt == n)){
	            return 0;
	        }
	    }
	    return cnt;
	}
int main()
{
    
    return 0;
}