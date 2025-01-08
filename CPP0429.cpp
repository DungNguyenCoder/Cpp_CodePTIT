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
#define TEST 0  

inline void solution()
{
    int n,k,b;
    cin >> n >> k >> b;
    int a[n] = {};
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x-1] = 1;
    }
    int res = 0;
    for(int i = 0; i < k; i++)
    {
        if(a[i] == 1)
            ++res;
    }
    int ans = res;
    for(int i = k; i < n; i++)
    {
        res = res - a[i-k] + a[i];
        ans = min(ans,res);
    }
    cout << ans;
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