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

string normalizeName(string name)
{
    stringstream ss(name);
    string word;
    vector<string> v;
    while(ss >> word)
    {
        int n = word.size();
        word[0] = toupper(word[0]);
        for(int i = 1; i < n; i++)
        {
            word[i] = tolower(word[i]);
        }
        v.push_back(word);
    }
    string ans = "";
    int n = v.size();
    for(int i = 0; i < n; i++)
    {
        ans += v[i];
        if(i != n-1)
            ans += " ";
    }
    return ans;
}

class SinhVien
{
private:
    string msv;
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;
public:
    SinhVien();
    friend istream& operator >> (istream &in, SinhVien &a);
    friend ostream& operator << (ostream &out, SinhVien a);
};

SinhVien::SinhVien()
{
    msv = "";
    hoten = "";
    lop = "";
    ngaysinh = "";
    gpa = 0;
}

istream& operator >> (istream &in, SinhVien &a)
{
    a.msv = "B20DCCN001";
    getline(in,a.hoten);
    in >> a.lop >> a.ngaysinh >> a.gpa;
    in.ignore();
    a.ngaysinh = normalizeDate(a.ngaysinh);
    a.hoten = normalizeName(a.hoten);
    return in;
}

ostream& operator << (ostream &out, SinhVien a)
{
    cout << a.msv << " " << a.hoten << " " << a.lop << " " << a.ngaysinh << " " << setprecision(2) << fixed << a.gpa;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}