#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e7;
const int mod = 1e9+7;
#define TEST 1

int nt[mx+5];

void sang()
{
    nt[0] = nt[1] = 1;
    for(int i = 2; i*i <= mx; i++)
    {
        if(nt[i] == 0)
        {
            for(int j = i*i; j <= mx; j += i)
            {
                nt[j] = 1;
            }
        }
    }
}

inline void solution()
{
    int a,b;
    cin >> a >> b;
    if(a > b)
        swap(a,b);
    for(int i = a; i <= b; i++)
    {
        if(nt[i] == 0)
            cout << i << " ";
    }
    cout << "\n";
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