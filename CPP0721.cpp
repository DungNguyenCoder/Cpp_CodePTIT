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
    int a[n];
    int dp[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Max = -1;
    for(int i = 0; i < n; i++)
    {
        dp[i] = 0;
        for(int j = i-1; j >= 0; j--)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[i],dp[j]);
            }
        }
        dp[i]++;
        Max = max(Max,dp[i]);
    }
    cout << Max << endl;
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