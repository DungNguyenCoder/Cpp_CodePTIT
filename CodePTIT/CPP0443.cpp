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

inline void solution()
{
    int n;
    cin >> n;
    --n;
    int a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    int ok = 1;
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(mp[i] == 0 && ok)
        {
            // cout << "ha";
            ans = i;
            ok = 0;
        }
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