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
    string thue, hopdong;
};

int ok = 1;
int idx = 1;

int cmp(NhanVien a, NhanVien b)
{
    stringstream ssa(a.ngaysinh);
    stringstream ssb(b.ngaysinh);
    string worda;
    string wordb;
    vector<string> A;
    vector<string> B;
    while(getline(ssa,worda,'/'))
    {
        A.push_back(worda);
    }
    while(getline(ssb,wordb,'/'))
    {
        B.push_back(wordb);
    }
    if(A[2] != B[2])
        return A[2] < B[2];
    else
    {
        if(A[0] != B[0])
            return A[0] < B[0];
        else
            return A[1] < B[1];
    }
}

void nhap(NhanVien& ds)
{
    if(ok)
    {
        cin.ignore();
        ok = 0;
    }
    ds.mnv = "000";
    if(idx < 10)
    {
        ds.mnv += "0" + to_string(idx);
    }
    else
    {
        ds.mnv += to_string(idx);
    }
    ++idx;
    getline(cin,ds.hoten);
    getline(cin,ds.gioitinh);
    getline(cin,ds.ngaysinh);
    getline(cin,ds.diachi);
    getline(cin,ds.thue);
    getline(cin,ds.hopdong);
}

void sapxep(NhanVien ds[],int n)
{
    sort(ds,ds+n,cmp);
}

void inds(NhanVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << ds[i].mnv << " " << ds[i].hoten << " " << ds[i].gioitinh << " " << ds[i].ngaysinh << " ";
        cout << ds[i].diachi << " " << ds[i].thue << " " << ds[i].hopdong << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}