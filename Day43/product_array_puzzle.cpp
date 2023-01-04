#include <bits/stdc++.h>
using namespace std;
vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{

    // code here
    vector<long long int> ans(n, 0);
    long long int P = 1;
    int countZero = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            countZero++;
        }
        else
        {
            P *= nums[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0 && countZero == 0)
        {
            ans[i] = P / nums[i];
        }
        else if (nums[i] == 0 && countZero == 1)
        {
            ans[i] = P;
        }
        else
        {
            ans[i] = 0;
        }
    }
    return ans;
}
int main()
{

    return 0;
}