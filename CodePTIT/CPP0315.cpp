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

string res(string s)
{
    int n = s.size();
    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] < s[i-1])
        {
            int tmp = i;
            for(int j = i+1; j < n; j++)
            {
                if(s[j] < s[i-1] && s[j] > s[tmp])
                    tmp = j;
            }
        swap(s[i-1],s[tmp]);
        if(s[0] == '0')
            s.erase(0,1);
        return s;
        }
    }
    return "-1";
}

inline void solution()
{
    string s;
    cin >> s;
    cout << res(s) << endl;
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