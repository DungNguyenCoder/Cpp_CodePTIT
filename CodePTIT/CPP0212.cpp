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

ll binpow1(ll a, ll b)
{
    if(b == 0)  return 1; //dieu kien dung
    ll x = binpow1(a,b/2); //a^(b/2)
    if(b % 2 == 1)
        return ((x%mod)*(x%mod)*(a%mod))%mod;
    else
        return ((x%mod)*(x%mod))%mod;
}


inline void solution()
{
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for(ll &x : a)
        cin >> x;
    ll ans = 0;
    ll mu = 1;
    for(int i = n-1; i >= 0; i--)
    {
        ans = (ans+a[i]*mu)%mod;
        mu = (mu*x)%mod;
    }
    cout << ans << "\n";
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