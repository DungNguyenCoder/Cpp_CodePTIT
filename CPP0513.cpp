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

struct SinhVien
{
    string msv;
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;
};

string chuanhoa(string s)
{
    if(s[2] != '/')
        s.insert(0,"0");
    if(s[5] != '/')
        s.insert(3,"0");
    return s;
}

void nhap(SinhVien ds[],int n)
{
    int k;
    for(int i = 0; i < n; i++)
    {
        ds[i].msv = "B20DCCN0";
        k = i+1;
        if(k < 10)
            ds[i].msv += "0" + to_string(k);
        else
            ds[i].msv += to_string(k);
        cin.ignore();
        getline(cin,ds[i].hoten);
        getline(cin,ds[i].lop);
        getline(cin,ds[i].ngaysinh);
        ds[i].ngaysinh = chuanhoa(ds[i].ngaysinh);
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[],int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << ds[i].msv << " " << ds[i].hoten << " " << ds[i].lop << " " << ds[i].ngaysinh << " " << setprecision(2) << fixed << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}