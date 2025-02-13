#include<stdio.h>

int main(){
    char s[4];
    for (int i = 0 ; i < 3 ; i++)
    {
        scanf("%s", &s);
        printf("%c\n", s[1]);
    }
    return 0;
}