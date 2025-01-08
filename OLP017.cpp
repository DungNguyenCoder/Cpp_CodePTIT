#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool TEST = 1;

#define mx 10000030

int prime[mx + 5];
int nt[mx + 5];
int x = 0;

void sieve()
{
    prime[0] = prime[1] = 1;
    for(int i = 2; i * i <= mx; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i * i; j <= mx; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i = 2; i <= mx; i++)
    {
        if(prime[i] == 0)
        {
            nt[++x] = i;
        }
    }
}

void pt(ll n)
{
    int d = 0;
    int i = nt[++d];
    while(i <= sqrt(n))
    {
        if(n % i == 0)
        {
            int d = 0;
            while(n % i == 0)
            {
                d++;
                n /= i;
            }
            cout << i << " " << d << "\n";
        }
        i = nt[++d];
    }
    if(n > 1) cout << n << " " << 1 << "\n";
    cout << "\n";
}

void solution()
{
    ll n;
    cin >> n;
    pt(n);
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    sieve();
    int t;
    if(TEST)    cin >> t;
    else        t = 1;
    while(t--)
    {
        solution();
    }
}