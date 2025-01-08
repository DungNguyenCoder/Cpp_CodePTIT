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
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(n > m)
        swap(n,m);
    int cnt = 0;
    for(int i = n; i <= m; i++)
    {
        if(i%a == 0 || i%b == 0)    
            ++cnt;
    }
    cout << cnt << endl;
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