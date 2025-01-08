#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dx[8] = {-1,0,0,1,1,-1,1,-1};
int dy[8] = {0,-1,1,0,1,-1,-1,1};

int a[505][505];
int n,m;

void loang (int i, int j)
{
	a[i][j] = 0;
	for (int k = 0; k < 8; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1)
		{
			loang(i1,j1);
		}
	}
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 1)
                {
                    ++cnt;
                    loang(i,j);
                }
            }
        }
        cout << cnt << endl;
    }
}