#include<stdio.h>

int main(){
    int a, c;
    scanf("%d", &a);
    for (int i = 1; i <= a ; i++)
    {
        scanf("%d", &c);getchar();
        printf("Case #%d: ", i);
        for ( int j = 0, b = 97 ; j < c ; j++, b++)
        {
            printf("%c", b);
        }
        puts("");
    }
}