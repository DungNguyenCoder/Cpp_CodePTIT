#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
const int mx = 1e5;
#define TEST 1

int a[mx+5];
int b[mx+5];
int k;

int tk(int b[], int x, int l, int r)
{
    while(l <= r)
    {
        int m = (l+r)/2;
        if(b[m] == x)
            return m+1;
        else if(b[m] > x)
            r = m-1;
        else
            l = m+1;
    }
    return -20;
}

void solution()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int ok = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        if(i > 0 && a[i] < a[i-1] && ok)
        {
            // cout << i;
            k = i;
            ok = 0;
        }
    }
    sort(b,b+n);
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            check = 1;
            break;
        }
    }
    int l = 0, r = n-1;
    if(check)
    {
        // for(int i = 0; i < n; i++)
        //     cout << b[i] << " ";
        // cout << endl;
        // cout << k << "\n";
        if(tk(b,x,l,r) != -20)
        {
            if(x >= a[0])
                cout << tk(b,x,l,r)-k;
            else
                cout << tk(b,x,l,r)+k;
        }
        // cout << tk(b,x,l,r);
    }
    else
        if(tk(b,x,l,r) != -20)
            cout << tk(b,x,l,r);
    cout << "\n";
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