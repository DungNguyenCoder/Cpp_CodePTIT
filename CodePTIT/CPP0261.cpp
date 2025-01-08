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
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int m;
    cin >> m;
    int b[m][m];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < m; j++)
            cin >> b[i][j];

    for(int i = 0; i < n; i += m)
    {
        for(int j = 0; j < n; j += m)
        {
            for(int k = 0; k < m; k++)
            {
                for(int l = 0; l < m; l++)
                {
                    a[i+k][j+l] *= b[k][l];
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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