#include<stdio.h>

int main(){
    char s[21];
    int a, b, c, d;
    for (int i = 0 ; i < 5; i++)
    {
        scanf("%s %d:%d-%d:%d", &s, &a, &b, &c, &d);getchar();
        printf("%s %02d:%02d-%02d:%02d\n", s, a-1, b, c-1, d);
    }
    return 0;
}