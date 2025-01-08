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
#define TEST 0

bool check(string s)
{
    int n = s.size();
    if(n == 1)
        return false;
    int l = 0, r = n-1;
    while(l <= r)
    {
        if(s[l] != s[r])
            return false;
        ++l;
        --r;
    }
    return true;
}

bool cmp(pair<string,int> a, pair<string,int> b)
{
    if(a.fi.size() > b.first.size())
        return 1;
    if(a.fi.size() < b.first.size())
        return 0;
    else
        return a.fi > b.fi;
}

inline void solution()
{
    string s;
    map<string,int> mp;
    while(cin >> s)
    {
        if(check(s))
            mp[s]++;
    }
    vector<pair<string,int>> v;
    for(auto x : mp)
        v.push_back(x);
    sort(v.begin(),v.end(),cmp);
    for(auto x : v)
        cout << x.fi << " " << x.se << endl;
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