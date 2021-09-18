
#include<stdio.h>

int main()
{
    int t,i=0;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if(a > b)
        {

         if(c > a)

                printf("Case %d: %d\n", i, a);

            else if(b > c)

                printf("Case %d: %d\n", i, b);

                else
                    printf("Case %d: %d\n", i, c);
        }
        else
        {
            if(b < c)
                printf("Case %d: %d\n", i, b);

            else if(a > c)
                printf("Case %d: %d\n", i, a);

            else
                printf("Case %d: %d\n", i, c);
        }

    }

    return 0;  
}
