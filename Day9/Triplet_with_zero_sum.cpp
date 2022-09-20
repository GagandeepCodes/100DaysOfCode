#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {
        // Your code here
        //-3 -1 0 1 2
        //  -2 -1 0 1 3
        int i=0;
        int j = n-1;
        sort(arr,arr+n);
        while(i<j){
            int count = 1;
            int sum = 0;
            if(abs(arr[i])>arr[j]){
                while(abs(arr[i])>arr[j]){
                    sum+=arr[j];
                    j--;
                    count++;
                    if(sum+arr[i] == 0){
                        return 1;
                    }
                    if(sum+arr[i] > 0){
                        i++;
                        break;
                    }
                    if(count>3){
                        i++;
                        break;
                    }
                }
            }
            else
            {
                while(arr[j]>abs(arr[i])){
                    sum+=arr[i];
                    i++;
                    if(sum+arr[j] == 0){
                        return 1;
                    }
                    if(sum+arr[j]<0){
                        j--;
                        break;
                    }
                    if(count>3){
                        j--;
                        break;
                    }
                }
            }
        }
        
        return 0;
    }
    }
};
int main()
{
    
    return 0;
}