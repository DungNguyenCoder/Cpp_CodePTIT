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

int idx = 1;
int check = 1;

void nhap(NhanVien &a)
{
    cin.ignore();
    a.mnv = "000";
    if(idx < 10)
    {
        a.mnv += "0";
        a.mnv += idx + '0';
    }
    else
    {
        a.mnv += idx/10 + '0';
        a.mnv += idx%10 + '0';
    }
    ++idx;
    getline(cin,a.hoten);
    cin >> a.gioitinh >> a.ngaysinh;
    cin.ignore();
    getline(cin,a.diachi);
    cin >> a.mst >> a.hopdong;
    a.ngaysinh = normalizeDate(a.ngaysinh);
    a.hopdong = normalizeDate(a.hopdong);
}

void inds(NhanVien a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i].mnv << " " << a[i].hoten << " " << a[i].gioitinh << " " << a[i].ngaysinh << " " << a[i].diachi << " " << a[i].mst << " " << a[i].hopdong << endl;
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}