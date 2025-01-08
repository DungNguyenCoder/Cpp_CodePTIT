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
    int n,k;
    cin >> n >> k;
    map<ll,ll> mp;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll sum = 0;
    for(int i = 0; i < n;i++)
    {
        if(mp[k-a[i]] > 0)
        {
            if(a[i] == k - a[i])
                sum += mp[k-a[i]]-1;
            else
                sum += mp[k-a[i]];
        }
    }
    cout << sum/2 << endl;
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