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

struct NhanVien
{
    string mnv;
    string hoten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string mst;
    string hopdong;
};

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

void nhap(NhanVien &a)
{
    a.mnv = "00001";
    getline(cin,a.hoten);
    cin >> a.gioitinh >> a.ngaysinh;
    cin.ignore();
    getline(cin,a.diachi);
    cin >> a.mst >> a.hopdong;
    a.ngaysinh = normalizeDate(a.ngaysinh);
    a.hopdong = normalizeDate(a.hopdong);
}

void in(NhanVien a)
{
    cout << a.mnv << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.hopdong;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}