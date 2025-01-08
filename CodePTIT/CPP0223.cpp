#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
#define CHECK 1

void solution()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n+5][m+5];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int c1 = 1, c2 = m;
    int h1 = 1, h2 = n;
    while(h1 <= (n+1)/2 && c1 <= (m+1)/2)
    {
        for(int i = c1; i <= c2; i++)
        {
            printf("%d ",a[h1][i]);
        }
        for(int i = h1+1; i <= h2; i++)
        {
            printf("%d ",a[i][c2]);
        }
        if(h2 > h1)
        {
            for(int i = c2-1; i >= c1; i--)
                printf("%d ",a[h2][i]);
        }
        if(c2 > c1)
        {
            for(int i = h2-1; i >= h1+1; i--)
                printf("%d ",a[i][c1]);
        }
        c1++;
        h1++;
        c2--;
        h2--;
    }
    printf("\n");
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}