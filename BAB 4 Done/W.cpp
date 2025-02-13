#include<stdio.h>

int main(){
    int tcase, n, a, o = 0 , e = 0;
    scanf("%d", &tcase);
    for (int i = 1; i <= tcase ; i++)
    {
        o = 0 , e = 0;
        scanf("%d", &n);
        for (int j = 0; j < n ; j++)
        {
            scanf("%d", &a);
            if (a%2 == 0) e++;
            else o++;
        }
        printf("Odd group : %d integer(s).\n", o);
        printf("Even group : %d integer(s).\n", e);
        puts("");
    }
    return 0;
}