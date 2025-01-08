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
    int a[n][m];
    int dp[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < m; j++)
    {
        dp[0][j] = a[0][j];
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == 1)
            {
                dp[i][j] = dp[i-1][j] + 1;
            }
            else
                dp[i][j] = 0;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        sort(dp[i],dp[i]+m,greater<int>());
        for(int j = 0; j < m; j++)
        {
            int area = dp[i][j] *(j+1);
            ans = max(ans,area);
        }
    }
    cout << ans << endl;
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