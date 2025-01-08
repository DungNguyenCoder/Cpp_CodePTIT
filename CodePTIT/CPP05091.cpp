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
    int cnt = 0;
    bool ok = 1;
    for(int i = -(n-1); i < n; i++)
    {
        for(int j = -(n-1); j < n; j++)
        {
            if(j > cnt)
                break;
            if(abs(j) == cnt)
            {
                // cout << "haha";
                cout << "*";
            }
            else
                cout << " ";
        }
        if(!ok)
            --cnt;
        if(ok)
            ++cnt;
        if(cnt == n-1)
        {
            ok = 0;
        }
        if(i != n-1)
            cout << endl;
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

