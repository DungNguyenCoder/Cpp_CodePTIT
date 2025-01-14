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
    map<char,int> mp;
    int n = s.size();
    if(s[0] == '0')
    {
        cout << "INVALID\n";
        return;
    }
    for(char x : s)
    {
        if(!isdigit(x))
        {
            cout << "INVALID\n";
            return;
        }
        else
        {
            mp[x]++;
        }
    }
    if(mp.size() == 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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