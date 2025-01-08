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

string decompose(char digit) 
{
    if (digit == '0' || digit == '1') return "";
    if (digit == '2') return "2";
    if (digit == '3') return "3";
    if (digit == '4') return "322";
    if (digit == '5') return "5";
    if (digit == '6') return "53";
    if (digit == '7') return "7";
    if (digit == '8') return "7222";
    if (digit == '9') return "7332";
    return "";
}

inline void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(char x : s)
    {
        ans += decompose(x);
    }
    sort(ans.rbegin(),ans.rend());
    cout << ans << endl;
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