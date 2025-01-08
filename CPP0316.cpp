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

inline void solution()
{
    string s;
    cin >> s;
    int tong = 0;
    while(s.size() >= 2)
    {
        tong = 0;
        while(!s.empty())
        {
            tong += (s[s.size()-1]-'0')%10;
            s.pop_back();
        }
        s = to_string(tong);
    }
    if(tong == 9)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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