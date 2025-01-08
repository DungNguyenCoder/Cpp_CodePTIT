#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double
#define endl "\n"

const int mx = 1e4;
const int mod = 1e9+7;
#define TEST 1

int b[mx+5];
int a[mx+5];

inline void solution()
{
    int n,q;
    cin >> n >> q;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    // for(int i = 0; i < n; i++)
    //     cout << b[i] << " ";
    // cout << endl;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        cout << b[r-1] - b[l-2] << endl;
    }
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }
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