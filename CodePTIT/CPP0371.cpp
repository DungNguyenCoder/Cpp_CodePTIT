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
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++)
        s[i] = tolower(s[i]);
    string t = "";
    for(int i = 0; i < n; i++)
    {
        if(isalpha(s[i]))
        {
            if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'))
            {
                t = t + '.' + s[i];
            }
        }
    }
    cout << t;
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