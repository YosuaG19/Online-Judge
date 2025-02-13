#include<stdio.h>

int main (){
    int a, b;
    scanf("%d", &a);
    for (int i = 1 ; i <= a ; i++)
    {
        scanf("%d", &b);
        printf("Case #%d: \n", i);
        for (int j = 1 ; j <= b ; j++)
        {
            for (int k = 1 ; k <= b-j ; k++) printf(" ");
            for (int k = 1 ; k <= j ; k++)
            {
                if (b%2 ==0)
                {
                    if (k%2 == 0) printf("*");
                    else printf("#");
                }
                else
                {
                    if (k%2 == 0) printf("#");
                    else printf("*");
                }
            }
            puts("");
        }        
    }
    return 0;
}