#include<stdio.h>

int main (){
    long long int a, b, c, d, e, f, g, h, i, j, k, l;
    scanf("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);getchar();
    scanf("(%lld+%lld)x(%lld-%lld)", &e, &f, &g, &h);getchar();
    scanf("(%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l);getchar();
    printf("%lld ", (a+b)*(c-d));
    printf("%lld ", (e+f)*(g-h));
    printf("%lld", (i+j)*(k-l));
    puts("");
    return 0;
}