#include<stdio.h>

int main(){
    long long int tcase, a, b, c, d ,e;
    scanf("%lld", &tcase);
    for (int i = 0 ; i < tcase ; i++)
    {
        scanf("%lld", &a);
        b = 1 + (2*(a-1));
        c = b/2 + 1, d = 0, e = 0;
        // printf("%d %d %d", a , b, c);
        for (int j = 1 ; j <= a ; j++, e++, d++)
        {
            for (int k = 1 ; k <= b ; k++) 
            {
                if ((k <= c+e && k >= c-d)) printf("*");
                else if (k < c-d) printf(" ");
            }
            printf("\n");
        }

    }
    return 0;
}