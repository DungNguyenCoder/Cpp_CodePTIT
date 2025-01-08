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
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int &x : a)
        cin >> x;
    sort(a,a+n);
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        while(a[i] - a[j] > k)
        {
            ++j;
        }
        if(a[i] - a[j] == k)
        {
            cout << 1 << endl;
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