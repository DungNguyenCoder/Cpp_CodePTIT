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

class PhanSo
{
private:
    ll tu, mau;
public:
    PhanSo(ll,ll);
    void rutgon();
    friend istream& operator >> (istream &in, PhanSo &a);
    friend ostream& operator << (ostream &out, PhanSo a);
};

PhanSo::PhanSo(ll,ll)
{

}

istream& operator >> (istream &in, PhanSo &a)
{
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream &out, PhanSo a)
{
    cout << a.tu << "/" << a.mau;
    return out;
}

void PhanSo::rutgon()
{
    ll k = gcd(tu,mau);
    tu /= k;
    mau /= k;
}


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}