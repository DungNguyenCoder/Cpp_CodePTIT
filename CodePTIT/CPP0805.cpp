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

string chuanhoa(string s){
    for(auto &x : s)
        x = tolower(x);
    return s;
}

inline void solution() {
    string s;
    map<string,int> a1,a2,a3;
    ifstream input1,input2;
    input1.open("DATA1.in");
    while(input1 >> s){
        s = chuanhoa(s);
        a1[s]++;
        a3[s]++;
    }
    input1.close();
    input2.open("DATA2.in");
    while(input2 >> s){
        s = chuanhoa(s);
        a2[s]++;
        a3[s]++;
    }
    input2.close();
    for(auto x : a3)
        cout << x.fi << " ";
    cout << endl;
    for(auto x : a1)
        if(a2[x.fi] > 0)
            cout << x.fi << " ";
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