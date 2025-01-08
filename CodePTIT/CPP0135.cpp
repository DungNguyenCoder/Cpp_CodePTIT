#include <stdio.h>
#include <math.h>

typedef long long ll;

int nt(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return n > 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        for (ll i = 1; i <= sqrt(n); i++)
        {
            if(nt(i))
                printf("%lld ",i*i);
        }
        printf("\n");
    }
}