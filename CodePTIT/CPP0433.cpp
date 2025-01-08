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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

inline void solution() {
    int n;
    cin >> n;
    int a[n];
    map<int,int> mp;
    for(int &x : a){
        cin >> x;
        mp[x]++;
    }
    vector<pair<int,int>> v (mp.begin() ,mp.end());
    sort(v.begin(),v.end(),cmp);
    n = v.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].second; j++)
            cout << v[i].first << " ";
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