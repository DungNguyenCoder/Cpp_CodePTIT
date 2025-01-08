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
    int n;
    cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    sort(a,a+n);
    int moc = a[n-1] - a[0];
    bool ok;
    int cnt = 0;
    for(int i = 1; i <= moc; i++){
        ok = true;
        for(int j = 1; j < n; j++){
            if((a[j] - a[0])%i != 0){
                ok = false;
                break;
            }
        }
        if(ok)  ++cnt;
    }
    cout << cnt << endl;
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