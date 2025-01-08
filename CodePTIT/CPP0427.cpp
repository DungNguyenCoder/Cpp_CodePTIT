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
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++)
    {
        if(a[i] != 0 && a[i] == a[i-1])
        {
            a[i-1] *= 2;
            a[i] = 0;
        }
    }
    for(int i = 0; i < n; i++)
        if(a[i] != 0)
            cout << a[i] << " ";
    for(int i = 0; i < n; i++)
        if(a[i] == 0)
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