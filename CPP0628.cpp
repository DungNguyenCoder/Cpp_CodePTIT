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

class sinhvien
{
private:
    string ma,ten;
    int num;
public:
    friend istream& operator >> (istream& in, sinhvien &a);
    friend ostream& operator << (ostream& out, sinhvien a);
    friend bool cmp(const sinhvien &a, const sinhvien &b);
};

istream& operator >> (istream& in, sinhvien &a)
{
    getline(in,a.ma);
    getline(in,a.ten);
    in >> a.num;
    in.ignore();
    return in;
}

ostream& operator << (ostream& out, sinhvien a)
{
    out << a.ma << " " << a.ten << " " << a.num << endl;
    return out;
}

bool cmp(const sinhvien &a, const sinhvien &b)
{
    if(a.num != b.num)
        return a.num > b.num;
    else
        return a.ma < b.ma;
}

inline void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    sinhvien a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
        cout << a[i];
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