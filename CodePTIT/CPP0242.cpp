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
    int a1[n],a2[n];
    for(int &x: a1)
        cin >> x;
    for(int &x : a2)
        cin >> x;
    int ans = 1;
    for(int i = 0; i < n; i++)
    {
        int s1 = 0, s2 = 0;
        for(int j = i; j < n; j++)
        {
            s1 += a1[j];
            s2 += a2[j];
            if(s1 == s2)
                ans = max(ans,j-i+1);
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