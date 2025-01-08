#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e5;
const int mod = 1e9+7;
#define TEST 1

string ans101 = "ABBADCCABDCCABD"; //0 -> 14
string ans102 = "ACCABCDDBBCDDBB"; //0 -> 14

inline void solution()
{
    int n;
    cin >> n;
    char s[15];
    int idx = 0;
    while(1)
    {
        char x;
        cin >> x;
        if(isalpha(x))
        {
            s[idx] = x;
            ++idx;
        }
        if(idx == 15)
            break;
    }
    double diem = 0;
    if(n == 101)
    {
        for(int i = 0; i < 15; i++)
        {
            if(ans101[i] == s[i])
                diem += ((1.0*2)/3);
        }
    }
    else
    {
        for(int i = 0; i < 15; i++)
        {
            if(ans102[i] == s[i])
                diem += ((1.0*2)/3);
        }
    }
    cout << setprecision(2) << fixed << diem << "\n";
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