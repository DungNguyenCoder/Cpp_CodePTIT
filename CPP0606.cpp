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

string normalizeDate(string date) 
{
    stringstream ss(date);
    string day, month, year;
    
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);

    if(day.length() == 1) day = "0" + day;
    if(month.length() == 1) month = "0" + month;
    while(year.length() < 4) year = "0" + year;

    return day + "/" + month + "/" + year;
}

class NhanVien
{
private:
    string mnv;
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string mst;
    string hopdong;
public:
    friend istream& operator >> (istream& in, NhanVien &a);
    friend ostream& operator >> (ostream& out, NhanVien a);
};


istream& operator >> (istream& in, NhanVien &a)
{
    a.mnv = "00001";
    getline(in,a.hoten);
    in >> a.gioitinh >> a.ngaysinh;
    in.ignore();
    getline(in,a.diachi);
    in >> a.mst >> a.hopdong;
    a.ngaysinh = normalizeDate(a.ngaysinh);
    a.hopdong = normalizeDate(a.hopdong);
    return in;
}

ostream& operator >> (ostream& out, NhanVien a)
{
    out << a.mnv << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.hopdong;
    return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}