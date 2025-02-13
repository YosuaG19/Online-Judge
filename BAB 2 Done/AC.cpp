#include<stdio.h>

int main(){
    long long int a, b = 1;
    scanf("%lld", &a);
    printf("%lld\n", (b<<a)-b);
    return 0;
}