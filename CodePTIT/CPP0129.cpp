#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

ll res (ll n, ll p)
{
    ll cnt = 0;
    while (n >= p)
    {
        cnt += n / p;
        n /= p;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll n,p;
        cin >> n >> p;
        cout << res(n,p) << endl;
    }
}