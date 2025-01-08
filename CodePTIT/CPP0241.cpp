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

int biendoi(int a[], int n)
{
    int cnt = 0;
    int i = 0, j = n-1;
    while(i < j)
    {
        if(a[i] == a[j])
        {
            ++i;
            --j;
        }
        if(a[i] > a[j])
        {
            a[j-1] += a[j];
            ++cnt;
            --j;
        }
        else if(a[i] < a[j])
        {
            a[i+1] += a[i];
            ++cnt;
            ++i;
        }
    }
    return cnt;
}

inline void solution()
{
    int n;
    cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    cout << biendoi(a,n) << endl;
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