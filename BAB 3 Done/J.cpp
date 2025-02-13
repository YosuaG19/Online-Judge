#include<stdio.h>

int main (){
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);
    if ((c-a) == (b-c) && (c-a) >= 0) printf("%d\n", c-a);
    else printf("%d\n", -1);
}