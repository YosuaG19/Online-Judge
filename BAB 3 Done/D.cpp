#include<stdio.h>

int main (){
    long long int a, b, c;
    scanf("%lld", &a);
    for (int i = 1 ; i <= a ; i ++)
    {
        scanf("%lld %lld", &b, &c);
        if ((b*c)%2 == 0) printf("Case #%d: Party time!\n", i);
        else printf("Case #%d: Need more frogs\n", i);
    }
    return 0;
}