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
public:
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
    friend bool cmp(NhanVien a, NhanVien b);
};

int idx = 0;

istream& operator >> (istream& in, NhanVien &a)
{
    a.mnv = "000";
    ++idx;
    if(idx < 10)    a.mnv += "0" + to_string(idx);
    else    a.mnv += to_string(idx);
    in.ignore();
    getline(in,a.hoten);
    in >> a.gioitinh >> a.ngaysinh;
    in.ignore();
    getline(in,a.diachi);
    in >> a.mst >> a.hopdong;
    a.ngaysinh = normalizeDate(a.ngaysinh);
    a.hopdong = normalizeDate(a.hopdong);
    return in;
}

ostream& operator << (ostream& out, NhanVien a)
{
    cout << a.mnv << " " << a.hoten << " " << a.gioitinh << " " << a.ngaysinh << " " << a.diachi << " " << a.mst << " " << a.hopdong << endl;
    return out;
}

bool cmp(NhanVien a, NhanVien b)
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

void sapxep(NhanVien ds[], int n)
{
    sort(ds,ds+n,cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}