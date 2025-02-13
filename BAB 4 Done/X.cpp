#include<stdio.h>

int main(){
    long long int a, b = 1;
    scanf("%d", &a);
    for (int i = 0 ; i < a ; i ++)
    {
        b*=2, b+=1;
    }
    printf("%lld\n", b);
}