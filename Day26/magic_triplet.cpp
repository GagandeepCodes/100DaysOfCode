#include <bits/stdc++.h>
using namespace std;
int countTriplets(vector<int> nums)
{
    // Code here.
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int prev = 0;
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
            {
                prev++;
            }
        }

        int next = 0;
        for (int k = i + 1; k < nums.size(); k++)
        {
            if (nums[k] > nums[i])
            {
                next++;
            }
        }
        ans += (prev * next);
    }
    return ans;
}
int main()
{

    return 0;
}