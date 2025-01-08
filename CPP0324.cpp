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

ll find(string s, ll b)
{
    ll res = 0;
    for(char x : s)
    {
        res = res*10 + x - '0';
        res %= b;
    }
    return res;
}

ll powMod(ll a, ll b, ll m)
{
    ll res = 1;
    while(b)
    {
        if(b%2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}

inline void solution()
{
    string a;
    ll b,m;
    cin >> a >> b >> m;
    ll du = find(a,m);
    cout << powMod(du,b,m) << endl;
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