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

map<string,int> mp;

inline void solution()
{
    int t;
    cin >> t;
    cin.ignore();
    string ans;
    while(t--)
    {
        ans = "";
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word)
        {
            int n = word.size();
            for(int i = 0; i < n; i++)
                word[i] = tolower(word[i]);
            v.push_back(word);
        }
        int n = v.size();
        ans += v[n-1];
        for(int i = 0; i < n-1; i++)
        {
            ans+=(v[i][0]);
        }
        if(mp.count(ans) == 0)
            cout << ans << "@ptit.edu.vn" << endl;
        else
            cout << ans << mp[ans] + 1 << "@ptit.edu.vn" << endl;
        mp[ans]++;
    }
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