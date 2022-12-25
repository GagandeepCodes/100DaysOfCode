#include <bits/stdc++.h>
using namespace std;

private:
bool knows(vector<vector<int>> &M, int a, int b, int n)
{
    if (M[a][b] == 1)
        return true;
    else
        return false;
}

public:
// Function to find if there is a celebrity in the party or not.
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    // step1: push all element in stack
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    // step2: get 2 elements and copare them

    while (s.size() > 1)
    {

        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (knows(M, a, b, n))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int ans = s.top();
    // step3: single element in stack is potential celeb
    // so verify it

    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] == 0)
            zeroCount++;
    }

    // all zeroes
    if (zeroCount != n)
        return -1;

    // column check
    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1)
            oneCount++;
    }

    if (oneCount != n - 1)
        return -1;

    return ans;
}
int main()
{

    return 0;
}