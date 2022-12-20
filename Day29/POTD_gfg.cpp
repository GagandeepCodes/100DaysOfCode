#include <bits/stdc++.h>
using namespace std;
int maxDistance(int arr[], int n)
{
    // Complete the function
    int ans = INT_MIN;
    int maxforcase1 = INT_MIN;
    int minforcase2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxforcase1 = max(maxforcase1, arr[i] - i);
        minforcase2 = min(minforcase2, arr[i] + i);

        int part1 = (arr[i] + i) - minforcase2;
        int part2 = maxforcase1 - (arr[i] - i);

        ans = max(ans, max(part1, part2));
    }

    return ans;
}
int main()
{

    return 0;
}