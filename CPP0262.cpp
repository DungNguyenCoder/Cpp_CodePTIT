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

inline void solution() {
    ll n,m;
    cin >> n >> m;
    ll sum = n*(n+1)/2;
    ll a = (sum+m)/2;
    ll b = (sum-m)/2;
    if(__gcd(a,b) == 1 && (sum+m) % 2 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
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