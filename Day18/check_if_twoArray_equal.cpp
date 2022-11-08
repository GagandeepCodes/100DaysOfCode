#include<bits/stdc++.h>
using namespace std;
bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        if(A.size()!= B.size()){
            return false;
        }
        else{
            for(int i=0;i<A.size();i++){
                if(A[i]!=B[i]){
                    return false;
                }
            }
            return true;
        }
    }
int main()
{
    
    return 0;
}