#include <bits/stdc++.h>
using namespace std;
vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    // Your code here
    vector<long long> ans;
    stack<long long> st;
    st.push(-1);
    for (long long i = n - 1; i >= 0; i--)
    {
        while (st.size() != 1 && arr[i] >= st.top())
            st.pop();
        ans.push_back(st.top());
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{

    return 0;
}