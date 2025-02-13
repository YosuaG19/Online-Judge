#include<stdio.h>

int main(){
    long long int a, b, c, d, e;
    scanf("%lld", &a);
    for (int i = 1 ; i <= a ; i++)
    {
        e = 0;
        scanf("%lld %lld", &b, &c);
        for (int j  = 1 ; j <= b ; j++)
        {
            scanf("%lld", &d);
            e += d;
        }
        if (c<e) printf("Case #%d: Wash dishes\n", i);
        else printf("Case #%d: No worries\n", i);
    }
    return 0;
}