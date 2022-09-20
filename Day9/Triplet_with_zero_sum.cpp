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
        int i = 0;
        int j = n - 1;
        int sum = 0;
        sort(arr, arr + n);
        while (i < j)
        {
            if (arr[i] < 0)
            {
                if (abs(arr[i]) > arr[j])
                {
                    while (abs(arr[i]) > arr[j])
                    {
                        sum += arr[j];
                        j--;

                        if (sum == 0)
                        {
                            return true;
                        }
                    }
                }
                else
                {
                    while (abs(arr[i]) < arr[j])
                    {
                        sum += arr[i];
                        i++;

                        if (sum == 0)
                        {
                            return true;
                        }
                    }
                }
            }
            else
            {
                return 0;
            }
        }
    }
};
int main()
{
    
    return 0;
}