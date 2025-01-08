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

class PhanSo
{
private:
    ll tu, mau;
public:
    PhanSo(int,int);
    friend istream& operator >> (istream& in, PhanSo &a);
    friend ostream& operator << (ostream& out, PhanSo a);
    friend PhanSo operator + (PhanSo a, PhanSo b);
};

PhanSo::PhanSo(int,int)
{
    
}

istream& operator >> (istream& in, PhanSo &a)
{
    in >> a.tu >> a.mau;
    return in;
}

PhanSo operator + (PhanSo a, PhanSo b)
{
    ll mau = lcm(a.mau,b.mau);
    ll tu = a.tu*b.mau + b.tu*a.mau;
    PhanSo ans(tu,mau);
    ans.tu = tu;
    ans.mau = a.mau*b.mau;
    ll k = gcd(ans.tu,ans.mau);
    ans.tu /= k;
    ans.mau /= k;
    return ans;
}

ostream& operator << (ostream& out, PhanSo a)
{
    cout << a.tu << "/" << a.mau;
    return out;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}