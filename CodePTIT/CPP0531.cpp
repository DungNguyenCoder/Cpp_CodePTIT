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

int a[4][4];

ll Det(int i, int j , int k){
    ll ans = a[i][0]*a[j][1]*a[k][2] + a[j][0]*a[k][1]*a[i][2] + a[k][0]*a[i][1]*a[j][2] - (a[k][0]*a[j][1]*a[i][2] + a[i][0]*a[k][1]*a[j][2] + a[j][0]*a[i][1]*a[k][2]);
    return ans;
}

inline void solution() {
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(j == 3)
                a[i][j] = 1;
            else
                cin >> a[i][j];
        }
    }
    ll ans = -Det(1,2,3) + Det(0,2,3) - Det(0,1,3) + Det(0,1,2);
    if(ans == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

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