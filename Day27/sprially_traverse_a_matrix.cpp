#include <bits/stdc++.h>
using namespace std;
vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    int left = 0;

    int right = c - 1;

    int top = 0;

    int bottom = r - 1;

    vector<int> res;

    while (left <= right && top <= bottom)
    {

        for (int i = left; i <= right; i++)
        {

            res.push_back(matrix[top][i]);
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {

            res.push_back(matrix[i][right]);
        }

        right--;

        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {

                res.push_back(matrix[bottom][i]);
            }

            bottom--;
        }

        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {

                res.push_back(matrix[i][left]);
            }

            left++;
        }
    }

    return res;
}
int main()
{

    return 0;
}