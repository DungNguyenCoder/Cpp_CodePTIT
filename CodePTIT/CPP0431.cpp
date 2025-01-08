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

void hieuNhoHonK() 
{ 
    int t; 
    cin >> t; 
    while (t--) 
    { 
        int n, k; 
        cin >> n >> k; 
        int a[n]; 
        for(int &x: a) 
            cin >> x; 
        sort(a, a+n); 
        ll cnt=0; 
        for(int i=0; i<n; i++) 
        { 
            auto it = lower_bound(a+i+1, a+n, k+a[i]); 
            ll x = it - (a+i) - 1; 
            cnt+=x; 
        } 
        cout << cnt << endl; 
    } 
    return; 
}

inline void solution()
{
    hieuNhoHonK();
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