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

ll f[93];

void fibo()
{
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i < 93; i++)
        f[i] = f[i-1]+f[i-2];
}

inline void solution()
{
    int n;
    cin >> n;
    cout << f[n] << "\n";
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