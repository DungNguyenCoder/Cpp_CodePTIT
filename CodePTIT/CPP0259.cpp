#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int const mod = 1e9 + 7;
int main()
{
	int n; cin >> n;
	int m; cin >> m;
	int p; cin >> p;
	ll a[n][m];
	ll b[m][p];
	ll c[n][p];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}