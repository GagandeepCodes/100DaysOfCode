#include<bits/stdc++.h>
using namespace std;
void rotateArr(int arr[], int d, int n)
{
    // code here
    int temp[n];
    d = d % n;
    for (int i = 0; i < n; i++)
    {
        int index = -1;
        if ((i - d) < 0)
        {
            index = n - d + i;
        }
        else
        {
            index = i - d;
        }

        temp[index] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    
    return 0;
}