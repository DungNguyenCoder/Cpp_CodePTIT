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
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> hop;
    map<int,int> mp;
    for(int &x : a)
    {
        cin >> x;
        hop.insert(x);
        mp[x] = 1;
    }
    for(int &x : b)
    {
        cin >> x;
        hop.insert(x);
        if(mp[x] == 1)
            mp[x] = 2;
    }
    for(int x : hop)
        cout << x << " ";
    cout << endl;
    for(int i = 0; i < mx+5; i++)
    {
        if(mp[i] == 2)
            cout << i << " ";
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