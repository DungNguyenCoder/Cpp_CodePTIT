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

bool check(string s)
{
    int n = s.size();
    int l = 0, r = n-1;
    while(l <= r)
    {
        if(s[l] != s[r] || (s[l] - '0')%2 || (s[r]-'0')%2)
            return 0;
        ++l;
        --r;
    }
    return 1;
}

inline void solution()
{
    string s;
    cin >> s;
    if(check(s))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
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