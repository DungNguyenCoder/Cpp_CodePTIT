#include <stdio.h>
#include <math.h>

typedef long long ll;

ll gcd(ll a, ll b)
{
    if(a == 0 || b == 0)    return a + b;
    while(b)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm (ll a, ll b)
{
    return (1.0*a) / gcd(a,b) * b;
}

ll a[105];

int main()
{
    int t;
    scanf("%d",&t);
    a[1] = 1;
    a[2] = 2;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for (int i = 3; i <= n; i++)
        {
            a[i] = lcm(a[i - 1],1ll*i);
        }
        printf("%lld\n",a[n]);
    }
}

