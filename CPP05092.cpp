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

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        for(int j = -n; j < n; j++){
            if(abs(j) == i){
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        cout << "* ";
    }
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}