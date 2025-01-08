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

struct thoigian
{
    int h,m,s;
};

bool cmp(thoigian a, thoigian b)
{
    if(a.h != b.h)
        return a.h < b.h;
    else
    {
        if(a.m != b.m)
            return a.m < b.m;
        else
            return a.s < b.s;
    }
}

inline void solution()
{
    int n;
    cin >> n;
    thoigian a[n];
    for(auto &x : a)
        cin >> x.h >> x.m >> x.s;
    sort(a,a+n,cmp);
    for(auto x : a)
        cout << x.h << " " << x.m << " " << x.s << endl;
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