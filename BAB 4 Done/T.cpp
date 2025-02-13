#include<stdio.h>

int main(){
    int a, b, c, d, e = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a ; i++)
    {
        scanf("%d %d %d", &b, &c, &d);
        if (b < c && c > d) e++;
    }
    printf("%d\n", e); 
}