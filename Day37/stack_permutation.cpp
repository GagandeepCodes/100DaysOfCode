#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isStackPermutation(int N, vector<int> &A, vector<int> &B)
    {
        int j = 0;
        stack<int> s;
        for (int i = 0; i < N; i++)
        {
            s.push(A[i]);

            if (s.top() == B[j])
            {
                while (!s.empty() && s.top() == B[j])
                {
                    s.pop();
                    j++;
                }
            }
        }
        if (s.size() == 0)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{

    return 0;
}