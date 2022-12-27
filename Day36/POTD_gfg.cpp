#include <bits/stdc++.h>
using namespace std;
long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long max_area = 0;
    long long i = 0;
    int j = len - 1;
    while (i < j)
    {
        max_area = max(max_area, (j - i) * min(A[i], A[j]));
        if (A[i] < A[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return max_area;
}
int main()
{

    return 0;
}