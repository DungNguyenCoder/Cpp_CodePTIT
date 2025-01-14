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
    freopen("DATA.in","r",stdin);
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    map<int,int> A,B;
    for(int &x : a) {
        cin >> x;
        A[x]++;
    }
    for(int &x : b) {
        cin >> x;
        B[x]++;
    }
    for(auto x : A){
        if(B[x.first] > 0)
            cout << x.fi << " ";
    }
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