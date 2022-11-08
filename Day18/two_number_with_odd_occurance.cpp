#include<bits/stdc++.h>
using namespace std;
vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        int XOR = 0;
        for(int i = 0; i < N; i++)
        {
            XOR ^= Arr[i];
        }
        int index = 0;
        //Finding the first Set Bit
        while(XOR)
        {
            if(XOR & 1)
            {
                break;
            }
            index++;
            XOR = XOR>>1;
        }
        int XOR1 = 0, XOR2 = 0;
        //now we will seperate the numbers whose indexth bit 
        //from left is 0 and 1
        //indexth bit is 0 , then in xor1
        //indexth bit is 1 , then in xor2
        for(int i = 0; i < N; i++)
        {
            if(Arr[i] & (1<<index))
            {
                XOR1 ^= Arr[i];
            }
            else
            {
                XOR2 ^= Arr[i];
            }
        }
        return {max(XOR1, XOR2), min(XOR1, XOR2)};
        
    }
int main()
{
    
    return 0;
}