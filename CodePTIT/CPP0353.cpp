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

int chuyenhoa(char x)
{
    if(x == 'A' || x == 'B' || x == 'C')
        return 2;
    else if(x == 'D' || x == 'E' || x == 'F')
        return 3;
    else if(x == 'G' || x == 'H' || x == 'I')
        return 4;
    else if(x == 'J' || x == 'K' || x == 'L')
        return 5;
    else if(x == 'M' || x == 'N' || x == 'O')
        return 6;
    else if(x == 'P' || x == 'Q' || x == 'R' || x == 'S')
        return 7;
    else if(x == 'T' || x == 'U' || x == 'V')
        return 8;
    else
        return 9;
}

inline void solution()
{
    string s;
    cin >> s;
    vector<int> v;
    for(char x : s)
    {
        v.push_back(chuyenhoa(toupper(x)));
    }
    int n = v.size();
    int l = 0, r = n-1;
    while(l <= r)
    {
        if(v[l] != v[r])
        {
            cout << "NO\n";
            return;
        }
        ++l;
        --r;
    }
    cout << "YES\n";
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