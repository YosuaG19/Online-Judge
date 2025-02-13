#include<stdio.h>

int main (){
    char s[101], c[101];
    int a;
    scanf("%[^\n]%s %d", &s, &c, &a);
    printf("Name: %s\nNIS: %s\nAge: %d\n", s, c, a);
    return 0;
}