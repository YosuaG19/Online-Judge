#include<stdio.h>

int main (){
    int a, b, c;
    scanf("%d", &a);
    for (int i = 1 ; i <= a ; i ++)
    {
        scanf("%d %d", &b, &c);
        if (b > c) printf("Case #%d: Go-Jo\n", i);
        else printf("Case #%d: Bi-Pay\n", i);
    }
    return 0;
}