#include<stdio.h>

int main (){
    int a, b, c, d;
    scanf("%d", &a);
    for (int i = 1 ; i <= a ; i++)
    {
        scanf("%d %d %d", &b, &c, &d);getchar();
        if (b > (c+d)) printf("Case #%d: no\n", i);
        else printf("Case #%d: yes\n", i);
    }
    return 0;
}