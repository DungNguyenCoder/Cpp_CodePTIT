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
    int n,k;
    cin >> n >> k;
    ll a[n];
    for(ll &x : a)
        cin >> x;
    ll sum = 0;
    int l = 0, r = k-1;
    for(int i = 0; i < k; i++) {
        sum += a[i];
    }
    ll max = sum;
    for(int i = 1; i < n-k+1; i++) {
        sum -= a[i-1];
        sum += a[i+k-1];
        if(sum > max) {
            max = sum;
            l = i;
            r = i+k;
        }
    }
    for(int i = l; i < r; i++)
        cout << a[i] << " ";
    cout << endl;
    // cout << l << " " << r << endl;
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