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

int a[256];

inline void solution()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = s.size();
    if(n < 26)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            ++a[s[i]];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[s[i]])
                ++cnt;
            a[s[i]] = 0;
        }
        int conlai = 26 - cnt;
        if(conlai > k)
            cout << 0 << endl;
        else
            cout << 1 << endl;
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