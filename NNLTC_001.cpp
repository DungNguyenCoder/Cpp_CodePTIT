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

struct DATA{
    int n,s;
};

inline void solution() {
    int x;
    vector<DATA> a;
    while(cin >> x){
        int ok = 1;
        for(int j = 0; j < a.size(); j++){
            if(a[j].n == x){
                ok = 0;
                a[j].s++;
                break;
            }
        }
        if(ok == 1){
            DATA b;
            b.n = x;
            b.s = 1;
            a.push_back(b);
        }
    }
    for(int i = 0; i < a.size(); i++){
        cout << a[i].n << " " << a[i].s << endl;
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