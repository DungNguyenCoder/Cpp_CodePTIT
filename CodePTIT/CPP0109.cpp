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
#define TEST 0

int check(int n)
{
    int cntchan = 0;
    int cntle = 0;
    while(n)
    {
        int a = n%10;
        if(a%2)
            ++cntle;
        else
            ++cntchan;
        n /= 10;
    }
    return cntchan == cntle;
}

inline void solution()
{
    int n;
    cin >> n;
    int l = pow(10,n-1);
    int r = pow(10,n)-1;
    int cnt = 0;
    for(int i = l; i <= r; i++)
    {
        if(check(i))
        {
            ++cnt;
            cout << i << " ";
        }
        if(cnt == 10)
        {
            cout << "\n";
            cnt = 0;
        }
    }
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