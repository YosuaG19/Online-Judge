#include<stdio.h>

int main(){
    int tcase, a, b;
    scanf("%d", &tcase);
    for (int i = 1; i <= tcase; i ++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d:\n", i);
        for (int j = 1 ; j <= a; j++)
        {
            for (int k  = 1; k <= b; k++)
            {
                if ( j == 1 || j == a) printf("#");
                else 
                {
                    if (k == 1 || k == b) printf("#");
                    else printf(" ");
                }
            }
            puts("");
        }
    }
}