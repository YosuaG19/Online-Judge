#include<stdio.h>

int main(){
    int tcase, ttl;
    scanf("%d", &tcase);
    for (int i = 1; i <= tcase ; i++)
    {
        scanf("%d", &ttl);
        printf("Case #%d:\n", i);
        for (int j  = 1 ; j <= ttl; j++)
        {
            printf("%d ", j);
            if (j%15 == 0) printf("Lili\n");
            else if (j%3 == 0 || j%5 == 0) printf("Jojo\n");
            else printf("Lili\n");
        }
    }
    return 0;
}