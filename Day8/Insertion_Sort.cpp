#include <bits/stdc++.h>
using namespace std;
void insert(int arr[], int i)
{
    // code here
    int j = i - 1;
    int key = arr[i];
    int temp = -1;

    while (j >= 0 && arr[j] > key)
    {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        j--;
    }
}

public:
// Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{
    // code here
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        insert(arr, i);
    }
}
int main()
{

    return 0;
}