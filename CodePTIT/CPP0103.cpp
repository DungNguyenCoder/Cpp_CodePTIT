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
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    double s = 0;
    for(int i = 1; i <= n; i++)
        s += 1/(1.0*i);
    cout << setprecision(4) << fixed << s;
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