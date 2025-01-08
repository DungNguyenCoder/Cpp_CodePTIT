#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e5;
const int mod = 1e9+7;
#define TEST 1

int ucln(int a, int b)
{
    if(b == 0)
        return a;
    return ucln(b,a%b);
}

ll bcnn(int a, int b)
{
    return 1ll*a*b/ucln(a,b);
}

inline void solution()
{
    int a,b;
    cin >> a >> b;
    cout << bcnn(a,b) << " " << ucln(a,b) << "\n";
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