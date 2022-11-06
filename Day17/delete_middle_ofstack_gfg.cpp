#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int size = s.size();
        stack<int> temp;
        int n = 0;
        if(s.size()%2){
            n = size/2;
        }
        else{
            n = (size/2);
        }
        for(int i=0;i<n;i++){
            int a = s.top();
            s.pop();
            temp.push(a);
        }
        s.pop();
        int temp_size = temp.size();
        for(int i=0;i<temp_size;i++){
            int x = temp.top();
            temp.pop();
            s.push(x);
        }
    }
};
int main()
{
    
    return 0;
}