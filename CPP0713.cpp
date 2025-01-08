#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
const int mx = 1e5;
#define TEST 1

int x[100],n, ok[100];
//ok[i] = 0 -> chua duoc dung
//ok[i] = 1 -> da duoc dung

void in()
{
    for(int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(ok[j] == 0)
        {
            x[i] = j;
            ok[j] = 1;
            if(i == n)
            {
                in();
                cout << " ";
            }
            else
                Try(i+1);   
            //bo ghi nhan
            ok[j] = 0;        
        }   
    }
}

inline void solution()
{
    memset(ok,0,sizeof(ok));
    cin >> n;
    Try(1);
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