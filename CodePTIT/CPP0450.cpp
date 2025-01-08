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
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    int ok = 1;
    int ans = -1;
    for(int &x : a)
    {
        cin >> x;
        mp[x]++;
        if(mp[x] == 2 && ok)
        {
            ans = x;
            ok = 0;
        }
    }
    cout << ans;
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