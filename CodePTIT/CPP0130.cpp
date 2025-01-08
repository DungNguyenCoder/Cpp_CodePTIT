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

inline void solution()
{
    ll n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        while(n%i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        if(n == 1)
            break;
    }
    if(n > 1)
        cout << n;
    cout << "\n";
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