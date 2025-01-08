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
    string msv,hoten,lop,email;
public:
    friend istream& operator >> (istream &in, sinhvien &a);
    friend ostream& operator << (ostream &out, sinhvien a); 
    friend bool cmp(const sinhvien &a,const sinhvien &b);
    string getlop() const
    {
        string x = "";
        x += lop[1] + lop[2];
        return x;
    }
};

bool cmp(const sinhvien &a,const sinhvien &b)
{
    return a.msv < b.msv;
}

istream& operator >> (istream &in, sinhvien &a)
{
    cin >> a.msv;
    cin.ignore();
    getline(cin,a.hoten);
    cin >> a.lop >> a.email;
    return in;
}

ostream& operator << (ostream &out, sinhvien a)
{
    cout << a.msv << " " << a.hoten << " " << a.lop << " " << a.email << endl;
    return out;
}

inline void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    sinhvien sv[n];
    for(int i = 0; i < n; i++)
    {
        cin >> sv[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
        string x;
        cin >> x;
        cout << "DANH SACH SINH VIEN KHOA " << x << ":" << endl;
        string s = "";
        s += x[2] + x[3];
        for(int i = 0; i < n; i++)
        {
            if(sv[i].getlop() == s)
                cout << sv[i];
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