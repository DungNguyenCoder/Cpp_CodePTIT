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

struct ThiSinh
{
    string hoten;
    string ngaysinh;
    double a,b,c;
};

void nhap(ThiSinh &a)
{
    getline(cin,a.hoten);
    cin >> a.ngaysinh >> a.a >> a.b >> a.c;
}

void in(ThiSinh a)
{
    cout << a.hoten << " " << a.ngaysinh << " ";
    printf("%.1lf",a.a+a.b+a.c);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}