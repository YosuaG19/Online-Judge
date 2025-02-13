#include<stdio.h>

int main (){
    long long int a, b, c, d;
    scanf("%lld", &a);
    for (int i = 1 ; i <= a ; i++)
    {
        scanf("%lld %lld %lld", &b, &c, &d);
        if ((b*c/100) >= d) printf("Case #%d: %d\n", i, d);
        else printf("Case #%d: %d\n", i, b*c/100);
    }
    return 0;
}