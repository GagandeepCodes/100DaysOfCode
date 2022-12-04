#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    return 0;
}class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        
        int count = 0;
        while(n>0){
            int i = n;
            while(i>0){
                if((i&1) == 1){
                    count++;
                }
                i = i>>1;
            }
            n--;
        }
        return count;
    }
};