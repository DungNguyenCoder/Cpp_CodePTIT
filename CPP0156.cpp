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
    ll b,p;
    cin >> b >> p;
    ll dem = 0;
    for(ll i = 1; i < p; i++){
        if((i*i)%p == 1){
            ll last = i + (b/p)*p;
            if(last > b) last -= p;
            dem += (last - i)/p + 1;
        }
    }
    cout << dem << endl;
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