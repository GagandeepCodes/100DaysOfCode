#include<bits/stdc++.h>
using namespace std;
int setBits(int N) {
        // Write Your Code here
        int cnt = 0;
        while(N>0){
            if((N&1) == 1){
                cnt++;
            }
            N=N>>1;
        }
        
        return cnt;
    }
int main()
{
    
    return 0;
}