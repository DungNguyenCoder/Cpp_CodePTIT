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
    for(int &x : a)
    {
        cin >> x;
        mp[x]++;
    }
    sort(a,a+n);
    int cnt = 0;
    for(int i = a[0]; i <= a[n-1]; i++)
    {
        if(!mp[i])
            ++cnt;
    }
    cout << cnt << endl;
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