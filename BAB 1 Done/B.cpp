#include<stdio.h>

int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 0; i < b; i++)
    {
        a ++;
        printf("%d\n", a);
    }
    return 0;
}