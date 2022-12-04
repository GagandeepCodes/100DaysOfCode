#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void Reverse(stack<int> &St){
        stack<int> temp;
        while(St.size()!=0){
            temp.push(St.top());
            St.pop();
        }
        St = temp;
    }
};
int main()
{
    
    return 0;
}