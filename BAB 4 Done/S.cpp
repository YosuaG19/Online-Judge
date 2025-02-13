#include<stdio.h>

int main (){
    long long int a, b, c, d = 0;
    scanf("%lld %lld", &a, &b);
    for (int i = 1; i <= a ; i++)
    {
        scanf("%lld", &c);
        if (c < b) d++;
    }
    printf("%lld\n", d);
}