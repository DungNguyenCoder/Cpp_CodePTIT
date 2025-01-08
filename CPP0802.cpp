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

ll ans = 0;

void res(string a){
    if(a.size() > 10)
        return;
    int pos = 0;
    if(a[0] == '-')
        pos = 1;
    for(int i = pos; i < a.size(); i++)
        if(a[i] > '9' || a[i] < '0')
            return;
    ll s = 0;
    for(int i = pos; i < a.size(); i++){
        s = s*10 + a[i] - '0';
    }
    if(pos == 1)
        s *= -1;
    if(s <= INT_MAX && s >= -1*INT_MAX)
        ans += s;
}

inline void solution() {
    string a;
    while(cin >> a){
        res(a);
    }
    cout << ans;
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