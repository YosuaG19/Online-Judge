#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    for (int i = 0 ; i < a ; i++)
    {
        c = b;
        for (int j = 1 ; j <= b ; j++, c--)
        {
            for (int k = 1 ; k <= b ; k++)
            {
                if (k >= c) printf("*");
                else printf(" ");
            }
            puts("");
        }
    }
}