#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    for (int i = 1 ; i <= a ; i++)
    {
        scanf("%d %d", &b, &c);getchar();
        b >>= c;
        printf("%d\n", b&1);
    }
    return 0;
}