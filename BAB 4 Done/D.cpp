#include<stdio.h>

int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a);
    for (int i = 1 ; i <= b ; i++)
    {
        a++;
        printf("%d\n", a);
    }
    return 0;
}