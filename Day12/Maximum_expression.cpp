#include <bits/stdc++.h>
using namespace std;
#define umap unordered_map
#define pb push_back
#define lli long long int
#define gag int
#define pob pop_back
#define daal insert
#define mp make_pair
void solve()
{
    // your code begins here
    lli t;cin>>t;
    while(t--){
    int n;cin>>n;
    vector<char>v;
    lli plus = 0; lli minus = 0;
        string s;cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i] =='+'){
                plus++;
            }
            else if(s[i] == '-'){
                minus++;
            }
            else
            {
                // cout<<s[i];
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        lli total = minus + plus;
        string final = "";
        lli counter = 0;
        for(int i=0;i<v.size()-total;i++){
            // string st = to_string(v[counter]);
            final = (final + v[counter]);
            counter++;
        }
        for(int i=0;i<plus;i++){
            final = final + '+';
            //  string st = to_string(v[counter]);
            final = final + v[counter];
            counter++;
        }
        for(int i=0;i<minus;i++){
            final = final + '-';
            // string st = to_string(v[counter]);
            final = final + v[counter];
            counter++;
        }
        
        cout<<final<<endl;
    }
}

int main()
{
    solve();
    return 0;
}