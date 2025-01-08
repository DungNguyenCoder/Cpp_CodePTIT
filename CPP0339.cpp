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
    for(int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    ll sum = 0;
    for(pair<char,int> x : mp)
    {
        if(x.se > 1)
        {
            sum += x.se*(x.se-1)/2;
        }
    }
    sum += 1ll*n;
    cout << sum << endl;
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