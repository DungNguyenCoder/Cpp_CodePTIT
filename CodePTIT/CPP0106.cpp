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

ll tn(ll n)
{
    ll tmp = n;
    ll rev = 0;
    while(n)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    return tmp == rev;
}

inline void solution()
{
    ll n;
    cin >> n;
    if(tn(n))
        cout << "YES\n";
    else
        cout << "NO\n";
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