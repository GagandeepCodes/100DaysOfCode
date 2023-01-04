#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {
        int row = strs.size();
        int col = strs[0].size();
        int count = 0;
        // we will traverse from col to col
        // for each col we will compare its values with other values present in the column.
        for (int i = 0; i < col; i++)
        {
            // for jumping from one row to another
            for (int j = 0; j < row - 1; j++)
            {
                // if lexographical order is not followed count++ and break it.
                // move to another column.
                if (strs[j][i] > strs[j + 1][i])
                {
                    count++;
                    break;
                }
            }
        }
        // return the count of the all the column not following the order.
        return count;
    }
};
int main()
{

    return 0;
}