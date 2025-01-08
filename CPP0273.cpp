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

// -7  1  5 2 -4 3 0
// -7 -6 -1 1 -3 0 0

inline void solution()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i == 0)
            b[i] = a[i];
        else
            b[i] = a[i] + b[i-1];
    }
    for(int i = 0; i < n-1; i++)
    {
        if(b[i] == b[n-1] - b[i+1])
        {
            cout << i+2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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