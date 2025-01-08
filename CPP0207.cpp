#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double
#define endl "\n"

const int mx = 1e6;
const int mod = 1e9+7;
#define TEST 1

int a[mx+5];

inline void solution()
{
    int n,d;
    cin >> n >> d;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    d %= n;
    for(int i = d; i < n; i++)
        cout << a[i] << " ";
    for(int i = 0; i < d; i++)
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