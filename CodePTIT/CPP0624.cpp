#include <bits/stdc++.h>
using namespace std;

class SinhVien 
{
private:
    string msv, ten, email, lop;
public:
    friend istream& operator>>(istream &in, SinhVien &a) 
    {
        scanf("\n");
        getline(in, a.msv);
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.email);
        return in;
    }
    friend ostream& operator<<(ostream &out, SinhVien a) 
    {
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return out;
    }
    string getmsv() 
    {
        return msv;
    }
    string getclass() 
{
        return lop;
    }
};

string nganh(string &s) 
{
    for (char &x : s) x = toupper(x);
    stringstream ss(s);
    string word, res = "";
    vector<string> v;
    while (ss >> word) 
    {
        v.push_back(word);
    }
    for (int i = 0; i < 2; i++) 
    {
        res += v[i][0];
    }
    return res;
}

string viethoa(string &s) 
{
    for (char &x : s) x = toupper(x);
    return s;
}

int main() 
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    int t;
    cin >> t;
    cin.ignore();
    while (t--) 
    {
        string s;
        getline(cin, s);
        cout << "DANH SACH SINH VIEN NGANH " << viethoa(s) << ":" << endl;
        string tmp = nganh(s);
        for (SinhVien x : a) 
        {
            string k = x.getmsv();
            string j = x.getclass();
            if ((tmp == "CN" || tmp == "AT")) 
            {
                if (j[0] != 'E' && k.find(tmp) != string::npos) 
                {
                    cout << x;
                }
            } 
            else 
            {
                if (k.find(tmp) != string::npos) 
                {
                    cout << x;
                }
            }
        }
    }
}
