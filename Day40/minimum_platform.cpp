#include<bits/stdc++.h>
using namespace std;
int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
        sort(dep,dep+n);
        int platform=1;
        int ans=1;
        int i=1,j=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                platform++;
                i++;
            }
            else if(arr[i]>dep[j]){
                platform--;
                j++;
            }
            ans=max(platform,ans);
        }
        return ans;
    }
int main()
{
    
    return 0;
}