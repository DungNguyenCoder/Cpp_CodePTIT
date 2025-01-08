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

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll r = a%b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b)
{
    return a*b/gcd(a,b);
}

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}

void rutgon(PhanSo &a)
{
    ll k = gcd(a.tu,a.mau);
    a.tu /= k;
    a.mau /= k;
}

PhanSo tong(PhanSo a, PhanSo b)
{
    ll mau = lcm(a.mau,b.mau);
    ll tu = a.tu*b.mau + b.tu*a.mau;
    PhanSo ans;
    ans.tu = tu;
    ans.mau = a.mau*b.mau;
    rutgon(ans);
    return ans;
}

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}