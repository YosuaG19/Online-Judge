#include<stdio.h>

int main (){
    long long int a, b, c, d, e, temp;
    scanf("%lld", &a);
    for (int i = 1 ; i <= a ; i++)
    {
        temp = 0;
        scanf("%lld %lld %lld", &b, &c, &d);
        for (int j = 1 ; j <= b ; j++)
        {
            scanf("%lld", &e);
            temp = e;
            if (c>=temp)
            {
                if (d<temp) d=temp;
            }
        }
        printf("Case #%d: %lld\n", i, d);
    }
}