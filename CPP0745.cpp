#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e5;
const int mod = 1e9+7;
#define TEST 1

ll F[2][2], M[2][2];
ll n;

void mul(ll f[2][2], ll m[2][2])
{
    ll x = (f[0][0]*m[0][0]%mod + f[0][1]*m[1][0]%mod)%mod;
    ll y = (f[0][0]*m[0][1]%mod + f[0][1]*m[1][1]%mod)%mod;
    ll z = (f[1][0]*m[0][0]%mod + f[1][1]*m[1][0]%mod)%mod;
    ll t = (f[1][0]*m[0][1]%mod + f[1][1]*m[1][1]%mod)%mod;
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = t;
}

void mu(ll f[2][2], ll n)
{
    if(n <= 1)
        return;
    mu(f,n/2);
    mul(f,f);
    if(n&1)
        mul(f,M);
}

inline void solution()
{
    F[0][0] = F[0][1] = F[1][0] = 1;
    F[1][1] = 0;
    M[0][0] = M[0][1] = M[1][0] = 1;
    M[1][1] = 0;
    cin >> n;
    if(n == 0)
        cout << 0;
    else
    {
        mu(F,n-1);
        cout << F[0][0];
    }
    cout << "\n";
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