#include<stdio.h>

int main(){
    int a, n, b, c = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n);
        b = n/2 + 1, c = 0;
        for (int j = 1 ; j <= n ; j++, ++c)
        {
            for (int k =1 ; k <= n ; k++)
            {
                if (j == 1 || j == n || k == 1 || k == n) printf("*");
                else if (j == b && k == b) printf("*");
                else if ((j == b-c || j == b+c) && (k == b-c || k == b+c)) printf("*");
                else if ((j == c+1 || j == n-c) && (k == c+1 || k == n-c)) printf("*");
                else printf(" ");
            }
            puts("");
        }
        puts("");
    }
}