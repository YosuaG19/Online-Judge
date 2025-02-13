#include<stdio.h>

int main (){
    long long int a, b, c= 0;
    scanf("%lld", &a);
    for (int i = 1 ; i <=a ; i++)
    {
        scanf("%lld", &b);
        c += b;
    }
    printf("%lld\n", c);
    return 0;
}