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
    string ten;
    string lop;
    double d1,d2,d3;
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.ten < b.ten;
}

void nhap(SinhVien &ds)
{
    cin.ignore();
    getline(cin,ds.msv);
    getline(cin,ds.ten);
    getline(cin,ds.lop);
    cin >> ds.d1 >> ds.d2 >> ds.d3;
}

void sap_xep(SinhVien ds[], int n)
{
    sort(ds,ds+n,cmp);
}  

void in_ds(SinhVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << " ";
        cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " ";
        printf("%.1lf %.1lf %.1lf",ds[i].d1,ds[i].d2,ds[i].d3);
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}