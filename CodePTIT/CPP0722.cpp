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
const int maxn = 2e4+5;

int n,s[maxn],a[maxn],len;

void add(int x,int delta)
{
	for(int i=2;i*i<=x;i++)
    {
		while(x%i == 0)
        {
			s[i] += delta;
			x/=i;
		}
	}
	if(x != 1) 
        s[x] += delta;
}

void mul(int x)
{
	len += 5;
	for(int i = 0; i < len; i++) 
        a[i] *= x;
	for(int i = 0; i < len; i++)
    {
		a[i+1] += a[i]/10;
		a[i] %= 10;
	}
	while(len > 0 && !a[len-1]) 
        len--;
}

inline void solution()
{
	cin >> n;
	n++;
	for(int i = 1; i <= n; i++) 
        add(2*n-i+1,1);
	for(int i = 1; i <= n+1; i++) 
        add(i,-1);
	a[0] = len = 1;
	for(int i = 1; i < maxn; i++)
    {
		while(s[i]--) 
            mul(i);
	}
	for(int i = len-1; i >= 0; i--)
        cout<<a[i];
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