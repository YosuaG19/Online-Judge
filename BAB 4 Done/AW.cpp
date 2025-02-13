#include<stdio.h>

int main(){
    int a, b, c, d, e;
    scanf("%d", &a);
    for ( int i = 1 ; i <= a ; i++)
    {
        scanf("%d", &b);
        d = e = 0;
        for (int j = 0 ; j < b ; j++)
        {
            scanf("%d", &c);
            if (j == 0) d = c;
            if (d < c) d = c, e = 0;
            if (d == c) e++;
        }
        printf("Case #%d: %d\n", i, e);
    }
}