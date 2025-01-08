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
    ll b[n];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    ll a[n] = {};
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
            a[i] = b[i]*b[i+1];
        else if(i == n-1)
            a[i] = b[i]*b[i-1];
        else
            a[i] = b[i-1]*b[i+1];
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
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