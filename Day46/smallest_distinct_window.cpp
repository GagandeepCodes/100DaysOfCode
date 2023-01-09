#include <bits/stdc++.h>
using namespace std;
int findSubString(string str)
{
    // Your code goes here
    set<int> s;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        s.insert(str[i]);
    }
    unordered_map<char, int> m;
    int mini = INT_MAX;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<"hello"<<endl;
        m[str[i]]++;
        while (j <= i && (s.size() == m.size()))
        {
            // cout<<"Size of set"<<s.size()<<" "<<"Size of map"<<m.size()<<endl;
            // cout<<"hello"<<endl;
            m[str[j]]--;
            mini = min(mini, i - j + 1);
            if (m[str[j]] == 0)
            {
                m.erase(str[j]);
            }
            j++;
        }
    }
    return mini;
}
int main()
{

    return 0;
}