#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> printMissingIntervals(int a[], int n) {
        // code here
        vector<int>ans;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(a[i] != count){
                ans.push_back(count);
                ans.push_back(a[i] - 1);
                count = a[i] + 1;
            }
            else{
                count++;
            }
        }
        
        if(a[n - 1] != 99999){
            ans.push_back(count);
            ans.push_back(99999);
        }
        
        return ans;
    }
};
int main()
{
    
    return 0;
}