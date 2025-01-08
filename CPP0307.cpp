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

inline void solution()
{
    string S;
    getline(cin,S);
    string T;
    getline(cin,T);
    vector<string> s;
    vector<string> t;
    stringstream ssS(S);
    stringstream ssT(T);
    string wordS;
    string wordT;
    while(ssS >> wordS)
    {
        s.push_back(wordS);
    }
    while(ssT >> wordT)
    {
        t.push_back(wordT);
    }
    int ns = s.size();
    int nt = t.size();
    for(int i = 0; i < nt; i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(t[i] == s[j])
            {
                s.erase(s.begin()+j);
                --j;
            }
        }
    }
    set<string> se;
    for(int i = 0; i < s.size(); i++)
        se.insert(s[i]);
    for(string x : se)
        cout << x << " ";
    cout << endl;
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