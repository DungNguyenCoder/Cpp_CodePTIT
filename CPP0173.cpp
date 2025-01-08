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

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

ll lcm(int a, int b)
{
    return 1ll*a*b/gcd(a,b);
}

inline void solution()
{
    int n, x,y,z;
    cin >> x >> y >> z >> n;
    ll a = pow(10,n-1);
    ll b = pow(10,n) - 1;
    ll bcnn = lcm(x,lcm(y,z));
    ll ans = -1;
    ans = (a + bcnn - 1) / bcnn * bcnn;
    if (ans >= a && ans <= b) 
        cout << ans << endl;
    else 
        cout << -1 << endl;
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