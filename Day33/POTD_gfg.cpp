#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long int wineSelling(vector<int> &Arr, int N)
    {
        // Code here.
        long long int buy = 0, sell = 0;
        //   int n = a.size();
        long long int ans = 0;
        while (buy < N && sell < N)
        {

            // for setting buy positive house
            while (Arr[buy] <= 0)
            {
                buy++;
                if (buy == N)
                    return ans;
            }
            // for setting sell negative house
            while (Arr[sell] >= 0)
            {
                sell++;
                if (sell == N)
                    return ans;
            }

            if (abs(Arr[buy]) > abs(Arr[sell]))
            {
                ans += abs(Arr[sell]) * abs(buy - sell);
                Arr[buy] += Arr[sell]; // deacrease by sell quantity
                Arr[sell] = 0;
            }
            else
            {
                ans += Arr[buy] * abs(buy - sell);
                Arr[sell] += Arr[buy];
                Arr[buy] = 0;
            }
        }

        return ans;
    }
};
int main()
{

    return 0;
}