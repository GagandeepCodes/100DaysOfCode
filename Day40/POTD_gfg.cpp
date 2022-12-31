#include<bits/stdc++.h>
using namespace std;
int minLaptops(int N, int start[], int end[]) { // 1 2 5 //2 3 6
        // Code here
        sort(start,start+N);
        sort(end,end+N);
        
        int laptop=1;int ans = 1;
        int i=1;int j=0;
        while(i<N && j<N){
            if(start[i]<end[j]){
                laptop++;
                i++;
            }
            else if (start[i]>=end[j]){
                laptop--;
                j++;
            }
            ans = max(ans,laptop);
        }
        return ans;
    }
int main()
{
    
    return 0;
}