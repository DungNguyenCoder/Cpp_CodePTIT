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

int nt(ll n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
            return 0;
    }
    return n > 1;
}

inline void solution()
{
    ll n; cin >> n;
    ll res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            if (cnt == 1) res *= i - 1;
            else res *= 1ll * pow(i,cnt) - pow(i,cnt - 1);
        }
    }
    if (n != 1) res *= n - 1;
    if(nt(res))
        cout << 1;
    else
        cout << 0;
    cout << endl;
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