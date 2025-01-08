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

int a[mx+5];
int b[mx+5];

inline void solution() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i = 0; i < n; i++){
        int *it = upper_bound(b,b+n,a[i]);
        if(it == b+n){
            cout << "_" << " ";
        }
        else{
            cout << *it << " ";
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