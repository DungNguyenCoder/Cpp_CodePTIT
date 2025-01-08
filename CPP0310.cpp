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
    string t;
    cin >> s >> t;
    int ns = s.size();
    int nt = t.size();
    for(int i = 0; i < ns; i++)
    {
        if(s[i] == '5')
            s[i] = '6';
    }
    for(int i = 0; i < nt; i++)
    {
        if(t[i] == '5')
            t[i] = '6';
    }
    ll a,b;
    a = stoll(s);
    b = stoll(t);
    ll ans1 = a+b;
    for(int i = 0; i < ns; i++)
    {
        if(s[i] == '6')
            s[i] = '5';
    }
    for(int i = 0; i < nt; i++)
    {
        if(t[i] == '6')
            t[i] = '5';
    }
    a = stoll(s);
    b = stoll(t);
    ll ans2 = a+b;
    cout << ans2 << " " << ans1 << endl;
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