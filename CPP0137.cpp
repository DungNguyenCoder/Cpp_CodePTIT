#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double
#define endl "\n"

const int mx = 1e6;
const int mod = 1e9+7;  
#define TEST 1

int nt[mx+5];

void sang(){
    nt[0] = nt[1] = 1;
    for(int i = 2; i * i <= mx; i++){
        if(nt[i] == 0){
            for(int j = i*i; j <= mx; j += i){
                nt[j] = 1;
            }
        }
    }
}

inline void solution() {
    ll l,r;
    cin >> l >> r;
    l = ceil(sqrt(l));
    r = sqrt(r);
    int cnt = 0;
    for(int i = l; i <= r; i++){
        if(nt[i] == 0)
            ++cnt;
    }
    cout << cnt << endl;
}

int main() {
    faster();
    sang();
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