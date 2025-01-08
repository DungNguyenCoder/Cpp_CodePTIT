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

struct human
{
    string ten;
    string ngaysinh;
};

bool cmp(human a, human b)
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
        if(A[1] != B[1])
            return A[1] < B[1];
        else
            return A[0] < B[0];
    }
}

inline void solution()
{
    int n;
    cin >> n;
    human a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].ten >> a[i].ngaysinh;
    }
    sort(a,a+n,cmp);
    // for(int i = 0; i < n; i++)
    // {
    //     cout << a[i].ten << " " << a[i].ngaysinh << endl;
    // }
    cout << a[n-1].ten << endl << a[0].ten;
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}