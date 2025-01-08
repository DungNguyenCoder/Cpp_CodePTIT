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

string tong(string a, string b)
{
    int na = a.size();
    int nb = b.size();
    int nmax = max(na,nb);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    while(a.size() < nmax)    a.push_back('0');
    while(b.size() < nmax)    b.push_back('0');
    string c = "";
    int nho = 0;
    int s = 0;
    for(int i = 0; i < nmax; i++)
    {
        s = a[i]-'0' + b[i]-'0' + nho;
        nho = s/10;
        s %= 10;
        c += (s+'0');
    }
    if(nho)
        c += (nho + '0');
    reverse(c.begin(),c.end());
    return c;
}

inline void solution()
{
    string a,b;
    cin >> a >> b;
    string c = tong(a,b);
    cout << c << endl;
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