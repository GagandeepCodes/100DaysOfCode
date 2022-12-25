#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool rowsum(vector<vector<int>> &matrix, long long int actual_sum,
                long long int mis_val)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            long long int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                    sum += mis_val;
                else
                    sum += matrix[i][j];
            }
            if (sum != actual_sum)
                return 0;
        }
        return 1;
    }
    bool colsum(vector<vector<int>> &matrix, long long int actual_sum,
                long long int mis_val)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            long long int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (matrix[j][i] == 0)
                    sum += mis_val;
                else
                    sum += matrix[j][i];
            }
            if (sum != actual_sum)
                return 0;
        }
        return 1;
    }

    bool diagsum(vector<vector<int>> &matrix, long long int actual_sum,
                 long long int mis_val)
    {
        long long d1 = 0, d2 = 0;
        int n = matrix.size();
        // d1
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][i] == 0)
                d1 += mis_val;
            else
                d1 += matrix[i][i];
        }

        // d2
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][n - i - 1] == 0)
                d2 += mis_val;
            else
                d2 += matrix[i][n - i - 1];
        }

        if (d1 == d2 && d1 == actual_sum && d2 == actual_sum)
            return 1;
        return 0;
    }
    long long int MissingNo(vector<vector<int>> &matrix)
    {
        // Code here

        int n = matrix.size();
        long long int indx_i = 0, indx_j = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    indx_i = i;
                    indx_j = j;
                }
            }
        }

        //
        long long int actual_sum = 0, zero_sum = 0;
        if (indx_i == 0)
        {
            for (int i = 0; i < n; i++)
                zero_sum += matrix[0][i];

            for (int i = 0; i < n; i++)
                actual_sum += matrix[1][i];
        }
        else
        {
            for (int i = 0; i < n; i++)
                actual_sum += matrix[0][i];

            for (int i = 0; i < n; i++)
                zero_sum += matrix[indx_i][i];
        }

        long long int mis_val = actual_sum - zero_sum;
        if (mis_val <= 0)
            return -1;

        if (rowsum(matrix, actual_sum, mis_val) && colsum(matrix, actual_sum, mis_val) && diagsum(matrix, actual_sum, mis_val))
            return mis_val;

        return -1;
    }
};
int main()
{

    return 0;
}