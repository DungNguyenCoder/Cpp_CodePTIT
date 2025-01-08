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

ll f[93];

void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < 93; i++)
        f[i] = f[i-1] + f[i-2];
} 

inline void solution()
{
    ll n;
    cin >> n;
    for(int i = 0; i < 93; i++)
    {
        if(n == f[i])
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    faster();
    fibo();
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