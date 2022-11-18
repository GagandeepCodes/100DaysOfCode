#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        int t = n;
        // if(n==1) return false;
        for(int i=0;i<t;i++){
            if(n==1) return true;
            if(n%2==0) n = n/2;
            else if(n%3==0) n = n/3;
            else if(n%5==0) n=n/5;
            else return false;
            cout<<n<<" ";

        }

        return true;
    }
};
int main()
{
    
    return 0;
}