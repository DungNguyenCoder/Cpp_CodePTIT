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
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] *= a[i];
    }
    sort(a,a+n);
    for(int k = n-2; k >= 2; k--)
    {
        int i = 0;
        int j = k-1;
        while(i < j)
        {
            if(a[i] + a[j] == a[k])
            {
                cout << "YES\n";
                return;
            }
            else if(a[i] + a[j] < a[k])
            {
                ++i;
            }
            else
                --j;
        }
    }
    cout << "NO\n";
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