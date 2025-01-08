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

struct sinhvien
{
    string msv,hoten,lop,email;
};

bool cmp(sinhvien a,sinhvien b)
{
    if(a.lop != b.lop)
        return a.lop < b.lop;
    else
        return a.msv < b.msv;
}

inline void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    sinhvien sv[n];
    for(int i = 0; i < n; i++)
    {
        cin >> sv[i].msv;
        cin.ignore();
        getline(cin,sv[i].hoten);
        cin >> sv[i].lop >> sv[i].email;
    }
    sort(sv,sv+n,cmp);
    for(int i = 0; i < n; i++)
    {
        cout << sv[i].msv << " " << sv[i].hoten << " " << sv[i].lop << " " << sv[i].email << endl;
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