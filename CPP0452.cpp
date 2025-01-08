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
    int a,b,c;
    cin >> a >> b >> c;
    vector<ll> v1(a),v2(b),v3(c);
    for (int i = 0; i < a; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> v2[i];
    }
    for (int i = 0; i < c; i++) {
        cin >> v3[i];
    }
    int i = 0, j = 0, k = 0;
    vector<ll> v;
    while (i < a && j < b && k < c) {
        if (v1[i] == v2[j] && v2[j] == v3[k]) {
            v.push_back(v1[i]);
            i++;
            j++;
            k++;
        }
        else if (v1[i] < v2[j]) {
            i++;
        }
        else if (v2[j] < v3[k]) {
            j++;
        }
        else {
            k++;
        }
    }
    if (v.empty()) {
        cout << -1;
    } 
    else {
        for (ll x : v) {
            cout << x << " ";
        }
    }
    cout << endl;
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