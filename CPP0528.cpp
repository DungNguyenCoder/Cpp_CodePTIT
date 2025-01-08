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
    int stt;
    string msv, hoten, lop, email, doanhnghiep;
};

bool cmp(sinhvien a, sinhvien b)
{
    return a.hoten < b.hoten;
}

inline void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    sinhvien a[n];
    for(int i = 0; i < n; i++)
    {
        a[i].stt = i+1;
        getline(cin,a[i].msv);
        getline(cin,a[i].hoten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
        getline(cin,a[i].doanhnghiep);
    }
    sort(a,a+n,cmp);
    int q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
        string x;
        cin >> x;
        for(int i = 0; i < n; i++)
        {
            if(a[i].doanhnghiep == x)
                cout << a[i].stt << " " << a[i].msv << " " << a[i].hoten << " " << a[i].lop << " " << a[i].email << " " << a[i].doanhnghiep << endl;
        }
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