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
    int n,m;
    cin >> n >> m;
    int a[105][105];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int in = 0;
    for(int k = 0; k < m; k++){
        vector<int> tmp = {};
        int i = 0, j = k;
        while(i < n && j >= 0){
            tmp.push_back(a[i][j]);
            ++i;
            --j;
        }
        if(in%2 == 0)
            for(int i = tmp.size()-1; i >= 0; i--)
                cout << tmp[i] << " ";
        else
            for(int i = 0; i < tmp.size(); i++)
                cout << tmp[i] << " ";
        ++in;   
    }
    for(int k = 1; k < n; k++){
        vector<int> tmp = {};
        int i = k, j = m-1;
        while(i < n && j >= 0){
            tmp.push_back(a[i][j]);
            ++i;
            --j;
        }
        if(in%2 == 0)
            for(int i = tmp.size()-1; i >= 0; i--)
                cout << tmp[i] << " ";
        else
            for(int i = 0; i < tmp.size(); i++)
                cout << tmp[i] << " ";
        ++in;
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