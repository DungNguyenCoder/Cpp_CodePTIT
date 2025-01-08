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
    n *= 4;
    int a[50][50];
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = num++;
        }
    }
    //day1
    vector<int> day1;
    int h1 = 0, h2 = n+1, c1 = 1, c2 = n;
    while(h1 < h2 && c1 < c2){
        h1++;
        h2--;
        for(int i = h1; i <= h2; i++){
            day1.push_back(a[i][c1]);
        }
        c1++;
        --c2;
        for(int i = c1; i <= c2; i++){
            day1.push_back(a[h2][i]);
        }
        h2--;
        h1++;
        for(int i = h2; i >= h1; i--){
            day1.push_back(a[i][c2]);
        }
        c1++;
        c2--;
        for(int i = c2; i >= c1; i--){
            day1.push_back(a[h1][i]);
        }
    }

    //day2
    vector<int> day2;
    h1 = 0;
    h2 = n+1;
    c1 = 1;
    c2 = n;
    while(h1 < h2 && c1 < c2){
        h2--;
        h1++;
        for(int i = h2; i >= h1; i--){
            day2.push_back(a[i][c2]);
        }
        c1++;
        c2--;
        for(int i = c2; i >= c1; i--){
            day2.push_back(a[h1][i]);
        }
        h1++;
        h2--;
        for(int i = h1; i <= h2; i++){
            day2.push_back(a[i][c1]);
        }
        c1++;
        --c2;
        for(int i = c1; i <= c2; i++){
            day2.push_back(a[h2][i]);
        }
    }

    reverse(day1.begin(),day1.end());
    reverse(day2.begin(),day2.end());
    for(int x : day2)
        cout << x << " ";
    cout << endl;
    for(int x : day1)
        cout << x << " ";
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