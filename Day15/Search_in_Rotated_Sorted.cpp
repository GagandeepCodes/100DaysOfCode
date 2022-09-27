#include<bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int search(int A[], int l, int h, int key)
{
    // l: The starting index
    // h: The ending index, you have to search the key in this range

    // complete the function here
    int n = h + 1;
    int pivot = getPivot(A, n);
    // cout<<pivot<<" ";

    if (key >= A[pivot] && key <= A[n - 1])
    {
        return binarySearch(A, pivot, n - 1, key);
    }
    else
    {
        return binarySearch(A, 0, pivot - 1, key);
    }
}
int main()
{
    
    return 0;
}