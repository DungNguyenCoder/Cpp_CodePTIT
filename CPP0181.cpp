#include <stdio.h>
#include <math.h>

long long ucln (long long a, long long b)
{
    if (a == 0 || b == 0) return a + b;
    while (b != 0)
    {
        long long tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		long long a,x,y;
		scanf("%lld%lld%lld",&a,&x,&y);
		for (int i = 1; i <= ucln(x,y); i++)
		{
			printf("%lld",a);
		}
		printf("\n");
	}
}