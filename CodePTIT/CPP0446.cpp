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
    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    int MIN = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(abs(a[i]+a[j]) < abs(MIN))
                MIN = a[i]+a[j];
        }
    }
    cout << MIN << endl;
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