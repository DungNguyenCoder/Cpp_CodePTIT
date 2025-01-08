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

struct SinhVien
{
    string msv;
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;
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
void nhapThongTinSV(SinhVien &a)
{
    a.msv = "N20DCCN001";
    getline(cin,a.hoten);
    cin >> a.lop >> a.ngaysinh >> a.gpa;
    a.ngaysinh = normalizeDate(a.ngaysinh);
}

void inThongTinSV(SinhVien a)
{
    cout << a.msv << "\t" << a.hoten << "\t" << a.lop << "\t" << a.ngaysinh << "\t" << setprecision(2) << fixed << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}