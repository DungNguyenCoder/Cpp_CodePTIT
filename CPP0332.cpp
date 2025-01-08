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

inline void solution()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string> a;
    int idx = 0;
    while(ss >> word)
    {
        int k = word.size();
        for(int i = 0; i < k; i++)
        {
            word[i] = tolower(word[i]);
        }
        a.push_back(word);
        ++idx;
    }
    cout << a[idx-1];
    for(int i = 0; i < idx-1; i++)
    {
        cout << a[i][0];
    }
    cout << "@ptit.edu.vn";
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