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

struct hanghoa
{
    int ma;
    string ten;
    string nhom;
    double mua,ban;
    double loinhuan;
};

hanghoa a[mx+5];

bool cmp(hanghoa a, hanghoa b)
{
    if(a.loinhuan > b.loinhuan)
        return 1;
    return 0;
}

inline void solution()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].ma = i+1;
        getline(cin,a[i].ten);
        getline(cin,a[i].nhom);
        cin >> a[i].mua >> a[i].ban;
        a[i].loinhuan = a[i].ban - a[i].mua;
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
    {
        cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << setprecision(2) << fixed << a[i].loinhuan << endl;
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