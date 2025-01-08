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

struct PhanSo
{
    ll tu,mau;
};

int gcd(ll a, ll b)
{
    while(b == 0)
        return a;
    return gcd(b,a%b);
}

PhanSo C(PhanSo a, PhanSo b)
{
    PhanSo c;
    c.tu = a.tu*b.mau + b.tu*a.mau;
    c.mau = a.mau * b.mau;
    c.tu *= c.tu;
    c.mau *= c.mau;
    ll k = gcd(c.tu,c.mau);
    c.tu /= k;
    c.mau /= k;
    return c;
}

PhanSo D(PhanSo a, PhanSo b, PhanSo c)
{
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    ll k = gcd(d.tu,d.mau);
    d.tu /= k;
    d.mau /= k;
    return d;
}

void process(PhanSo a, PhanSo b)
{
    PhanSo c = C(a,b);
    PhanSo d = D(a,b,c);
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}