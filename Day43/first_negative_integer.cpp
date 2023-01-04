#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    queue<long long int> q;
    vector<long long int> ans;

    long long int j = 0, i = 0;
    while (i < N)
    {
        if (A[i] < 0)
        {
            q.push(A[i]);
        }
        if (i - j + 1 < K)
        {
            i++;
        }
        else if (i - j + 1 == K)
        {
            if (q.size() == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(q.front());
                if (A[j] == q.front())
                {
                    q.pop();
                }
            }
            j++;
            i++;
        }
    }
    return ans;
}
int main()
{

    return 0;
}