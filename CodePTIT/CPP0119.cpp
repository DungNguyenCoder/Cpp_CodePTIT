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
    int cnt = 0;
    if(n%2 == 0)
        ++cnt;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            if(i%2 == 0)
                ++cnt;
            if((n/i)%2 == 0)
                ++cnt;
        }
    }
    int a = sqrt(n);
    if(a*a == n && cnt > 0)
        --cnt;
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