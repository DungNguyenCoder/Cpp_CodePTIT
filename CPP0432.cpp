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

int cmp(string a, string b)
{
    // while(a.size() > b.size())  b += '0';
    // while(b.size() > a.size())  a += '0';
    return a+b > b+a;
}

inline void solution()
{
    int n;
    cin >> n;
    string a[n+5];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
        cout << a[i];
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