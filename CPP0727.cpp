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
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll dp[n];
    if(n == 1) {
        cout << a[0] << endl;
        return;
    }
    if(n == 2) {
        cout << max(a[0],a[1]) << endl;
        return;
    }
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[2] + a[0];
    for(int i = 3; i < n; i++) {
        dp[i] = a[i];
        dp[i] += max(dp[i-2], dp[i-3]);
    }
    cout << max(dp[n-1],dp[n-2]) <<endl;
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