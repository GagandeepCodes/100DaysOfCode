#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long lcmTriplets(long long N) {
        // code here
        if(N==2 || N==1){
            return N;
        }
        long long int ans = 0;
        if(N%2==0){
            if(N%3==0){
                return (N-3)*(N-2)*(N-1);
            }
            else
            {
                return (N)*(N-1)*(N-3);
            }
        }
        else
        {
            return N*(N-1)*(N-2);
        }
    }
};
int main()
{
    
    return 0;
}