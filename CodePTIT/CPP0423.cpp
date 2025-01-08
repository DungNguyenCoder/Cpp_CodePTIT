#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double
#define endl "\n"

const int mx = 1e7;
const int mod = 1e9+7;
#define TEST 1

int a[mx+5];

inline void solution()
{
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= k)
            ++cnt;
    }
    int ans = 0;
    for(int i = 0; i < cnt; i++)
    {
        if(a[i] <= k)
            ++ans;
    }
    int res = ans;
    for(int i = cnt; i < n; i++)
    {
        if(a[i-cnt] <= k)
        {
            --ans;
        }
        if(a[i] <= k)
            ++ans;
        res = max(res,ans);
    }
    cout << cnt-res << endl;
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