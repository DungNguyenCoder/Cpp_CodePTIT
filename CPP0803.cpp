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

inline void solution() {
    int n;
    map<int,int> mp;
    while(cin >> n){
        mp[n]++;
    }
    for(auto x : mp){
        cout << x.fi << " " << x.second << endl;
    }
}

int main() {
    faster();
    freopen("DATA.in","r",stdin);
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