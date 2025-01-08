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
    int k;
    cin >> k;
    cin.ignore();
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word)
    {
        int n = word.size();
        word[0] = toupper(word[0]);
        for(int i = 1; i < n; i++)
            word[i] = tolower(word[i]);
        v.push_back(word);
    }
    int n = v.size();
    if(k == 1)
    {
        cout << v[n-1] << " ";
        for(int i = 0; i < n-1; i++)
            cout << v[i] << " ";
    }
    else
    {
        for(int i = 1; i < n; i++)
            cout << v[i] << " ";
        cout << v[0];
    }
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