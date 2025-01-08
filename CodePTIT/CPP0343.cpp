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
    int leng = 0;
    int cntchan = 0;
    int cntle = 0;
    int n;
    while(scanf("%d",&n) != -1)
    {
        ++leng;
        if(n%2)
            ++cntle;
        else
            ++cntchan;
        char k = getchar();
        if(k == '\n')   break;
    }
    if((leng%2 == 0 && cntchan > cntle) || (leng%2 && cntle > cntchan))
        cout << "YES\n";
    else
        cout << "NO\n";
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