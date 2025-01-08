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

void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}