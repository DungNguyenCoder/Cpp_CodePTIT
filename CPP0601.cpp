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

class SinhVien
{
public:
    void nhap();
    void xuat();

private:
    string msv;
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;
};

void SinhVien::nhap()
{
    msv = "B20DCCN001";
    getline(cin,hoten);
    cin >> lop >> ngaysinh >> gpa;
    cin.ignore();
    ngaysinh = normalizeDate(ngaysinh);
}

void SinhVien::xuat()
{
    cout << msv << " " << hoten << " " << lop << " " << ngaysinh << " " << setprecision(2) << fixed << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}