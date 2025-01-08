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
    int n;
    cin >> n;
    
    ll a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] >= 0 && a[i] < n)
            mp[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(mp[i] <= 0)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << i << " ";
        }
    }
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