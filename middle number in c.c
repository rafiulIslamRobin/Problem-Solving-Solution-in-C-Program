#include<stdio.h>

int main()
{
    int t,i=0;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a<c && b<a || a<b && a>c)
            printf("Case %d: %d\n", i, a);

        else if(a<b && b<c || a>c && b>c)
            printf("Case %d: %d\n", i, b);

        else if(a<c && b>c || a>c && b<c)
            printf("Case %d: %d\n", i, c);
    }

   
    return 0;
}
