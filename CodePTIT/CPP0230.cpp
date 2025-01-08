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
    int a[n][3];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int cnt1 = 0;
        int cnt0 = 0;
        for(int j = 0; j < 3; j++)
        {
            int x = a[i][j];
            if(x == 0)
                ++cnt0;
            else
                ++cnt1;
        }
        if(cnt1 > cnt0)
            ++cnt;
    }
    cout << cnt;
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