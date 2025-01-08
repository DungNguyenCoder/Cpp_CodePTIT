#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
const int mx = 1e5;
#define TEST 1

int x[100],n,k;

void in()
{
    for(int i = 1; i <= k; i++)
    {
        cout << x[i];
    }
}

void Try(int i)
{
    for(int j = x[i-1]+1; j <= n-k+i; j++)
    {
        x[i] = j;
        if(i == k)
        {
            in();
            cout << " ";
        }
        else
            Try(i+1);
    }
}

inline void solution()
{
    cin >> n >> k;
    Try(1);
    cout << endl;
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