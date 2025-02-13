#include<stdio.h>

int main(){
    long long int a, ttl = 1;
    for (int i = 0 ; i < 3 ; i++)
    {
        scanf("%lld", &a);
        ttl *= a;
    }
    printf("%lld\n", ttl);
    return 0;
}