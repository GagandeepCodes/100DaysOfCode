#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        long long int pre1 = 2;
        long long int pre2 = 1;
        long long int ans = 0;
        for(int i=3;i<=n;i++){
            ans = pre1 + pre2;
            pre2 = pre1;
            pre1 = ans;
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}