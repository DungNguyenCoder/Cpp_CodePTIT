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

inline void solution()
{
    int n,k; cin >> n >> k;
    int a[n];
    int ans = -1;
    int ok = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == k && ok)
        {
            ans = i+1;
            ok = 0;
        }
    }
    cout << ans << endl;
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