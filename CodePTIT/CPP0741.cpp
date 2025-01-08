#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e5;
// const int mod = 1e9 + 7;
#define TEST 1

ll ans(ll n, ll k, ll mod)
{
    if(k == 0)  return 1;
    if(k == 1)  return n%mod;
    ll x = ans(n,k/2,mod);  
    if(k%2 == 0)
        return (x%mod * x%mod)%mod;
    else
        return (x%mod * x%mod * n%mod)%mod;
}

void solution()
{
    ll n,k,mod;
    cin >> n >> k >> mod;
    cout << ans(n,k,mod) << "\n";
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