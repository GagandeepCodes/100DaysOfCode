#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> primeDivision(int N)
    {
        // code here
        vector<bool> seive(N, true);
        seive[0] = seive[1] = 0;
        // set true for every number
        for (int i = 2; i <= N; i++)
        {
            if (seive[i])
            {
                for (int j = 2 * i; j <= N; j += i)
                {
                    seive[j] = 0;
                }
            }
        }

        for (int i = 2; i < N; i++)
        {
            if (seive[i] && seive[N - i])
                return {i, N - i};
        }
    }
};
int main()
{

    return 0;
}