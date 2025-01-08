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
    ll a[n],b[m];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    // for(int i = 0; i < n;i++)
    //     cout << a[i] << " ";
    // cout << endl;
    // for(int i = 0; i < m; i++)
    //     cout << b[i] << " ";
    // cout << endl;
    cout << a[n-1]*b[0] << endl;
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