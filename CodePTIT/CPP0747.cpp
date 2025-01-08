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
    string s;
    cin >> s;
    int n = s.size();
    string x = "100";
    while(1){
        if(s.find(x) != string::npos){
            s.erase(s.find(x),3);
        }
        else
            break;
    }
    cout << n - s.size() << endl;
}

int main() {
    faster();
    freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);   
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