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

struct giaovien
{
    string mgv,hoten,mon;
};

bool cmp(const giaovien &a, const giaovien &b)
{
    stringstream ssa(a.hoten);
    stringstream ssb(b.hoten);
    string worda, wordb;
    vector<string> va;
    vector<string> vb;
    while(ssa >> worda)
        va.push_back(worda);
    while(ssb >> wordb)
        vb.push_back(wordb);
    if(va.back() != vb.back())
        return va.back() < vb.back();
    else
        return a.mgv < b.mgv;
}

inline void solution()
{
    int n;
    cin >> n;
    cin.ignore();
    giaovien a[n];
    for(int i = 0; i < n; i++)
    {
        a[i].mgv = "GV";
        int k = i+1;
        if(k < 10)
            a[i].mgv += "0" + to_string(k);
        else
            a[i].mgv += to_string(k);
        getline(cin,a[i].hoten);
        getline(cin,a[i].mon);
        stringstream ss(a[i].mon);
        string word;
        a[i].mon = "";
        while(ss >> word)
        {
            a[i].mon.push_back(toupper(word[0]));
        }
    }
    sort(a,a+n,cmp);
    for(int i = 0; i < n; i++)
        cout << a[i].mgv << " " << a[i].hoten << " " << a[i].mon << endl;
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