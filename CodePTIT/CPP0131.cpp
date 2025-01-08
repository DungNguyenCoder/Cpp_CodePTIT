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

int nt[10005];

void sang()
{
    for(int i = 1; i <= 10005; i++)
        nt[i] = i;
    for(int i = 2; i <= sqrt(10005); i++)
    {
        if(nt[i])
        {
            for(int j = i*i; j <= 10005; j += i)
            {
                if(nt[j] == j)
                    nt[j] = i;
            }
        }
    }
}

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << nt[i] << " ";
    }
    cout << endl;
}

int main()
{
    faster();
    sang();
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