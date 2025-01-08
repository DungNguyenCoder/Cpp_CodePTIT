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

ll ChiaDu(string s, ll m)
{
    ll res = 0;
    for(char x : s)
        res = (res*10 + x - '0')%m;
    return res;
}

ll Gcd(ll a, ll b){
    if(b == 0)  return a;
    return Gcd(b,a%b);
}

inline void solution() {
    ll a;
    string b;
    cin >> a >> b;
    ll c = ChiaDu(b,a);
    cout << Gcd(c,a) << endl;
}

int main() {
    faster();
    int t;
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}