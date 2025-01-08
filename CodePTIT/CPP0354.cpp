#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

char s[1000005];

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        scanf("%s",s);
        int n = strlen(s);
        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if(s[i] != s[i + 1])
            {
                printf("%c%d",s[i],cnt);
                cnt = 0;
            }
            cnt++;
        }
        printf("\n");
    }
}