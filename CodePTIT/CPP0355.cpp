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
    string s;
    bool dau = true;
    while(cin >> s)
    {
        int n = s.size();
        for(char &x : s)
            x = tolower(x);
        if(dau == true)
            s[0] = toupper(s[0]);
        dau = false;
        if(s[n-1] == '!' || s[n-1] == '.' || s[n-1] == '?')
        {
            s.pop_back();
            dau = true;
            cout << s << endl;
        }
        else
        {
            cout << s << " ";
        }
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