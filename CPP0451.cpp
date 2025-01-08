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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int k,x;
    cin >> k >> x;
    // vector<int>::iterator it1 = lower_bound(v.begin(),v.end(),x);
    // int idx = it1 - v.begin();
    int idx = -1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == x)
        {
            idx = i;
            break;
        }
    }
    // cout << idx;
    for(int i = idx - (k/2); i < idx; i++)
        cout << v[i] << " ";
    // for(int i = idx + 1; idx <= idx + (k/2); i++)
    //     cout << v[i] << " ";
    for(int i = idx + 1; i <= idx + k/2; i++)
        cout << v[i] << " ";
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