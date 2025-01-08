#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long

const int mx = 1e5;
const int mod = 1e9 + 7;  
#define TEST 1

inline void solution() {
    ll n;
    cin >> n;
    if (n > (ll)1e12){
        cout << 0 << endl;
        return;
    }
    ll Sum = 1;
    double sqr = sqrt(n);
    for (int i = 2; i < sqr; i++) {
        if (n % i == 0) {
            Sum += i;
            Sum += n / i;
        }
    }
    sqr = (int)sqr;
    if (sqr * sqr == n) {
        Sum += sqr;
    }
    if(Sum == n)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main() {
    faster();
    int t;
    if (TEST) {
        cin >> t;
        cin.ignore();
    } else {
        t = 1;
    }
    while (t--) {
        solution();
    }
    return 0;
}
