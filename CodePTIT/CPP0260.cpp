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
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    int b[n*n];
    int a[n][n];
    for(int &x : b)
        cin >> x;
    sort(b,b+n*n);
    // for(int i = 0; i < n*n; i++)
    //     cout << b[i] << " ";
    // cout << endl;
    int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
    int idx = 0;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1; i <= c2; i++)
            a[h1][i] = b[idx++];
        ++h1;
        for(int i = h1; i <= h2; i++)
            a[i][c2] = b[idx++];
        --c2;
        for(int i = c2; i >= c1; i--)
            a[h2][i] = b[idx++];
        --h2;
        for(int i = h2; i >= h1; i--)
            a[i][c1] = b[idx++];
        ++c1;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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