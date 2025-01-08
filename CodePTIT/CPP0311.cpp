#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;
#define TEST 1

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char,int> mp;
    for(char x : s)
        mp[x]++;
    for(auto x : mp)
    {
        if(x.se > ceil(1.0*n/2))
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}