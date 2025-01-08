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
	int n,m;
	cin >> n >> m;
	ll b[n], c[m];
	for (ll &x : b)	cin >> x;
	for (ll &x : c)	cin >> x;
    sort(b,b+n);
    sort(c,c+m);
	int i = 0, j = 0;
	while (i < n && j < m)
	{
		if (b[i] <= c[j])
		{
			cout << b[i] << " ";
			++i;
		}
		else
		{
			cout << c[j] << " ";
			++j;
		}
	}
	while (i < n)
	{
		cout << b[i] << " ";
		++i;
	}
	while (j < m)
	{
		cout << c[j] << " ";
		++j;
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