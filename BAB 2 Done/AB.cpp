#include<stdio.h>

int main(){
    long long int a, ttl = 0, bns = 50;
    scanf("%lld", &a);
    for (int i = 0; i < a ; i++)
    {
        ttl = ttl +  100 + bns*i;
    }
    printf("%lld\n", ttl);
    return 0;
}