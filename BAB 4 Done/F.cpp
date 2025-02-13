#include<stdio.h>

int main (){
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1 ; i <= a ; i++) 
    {
        for(int j = 1 ; j <= a ; j++)
        {
            printf("#");
        }
        puts("");
    }
    puts("");

    for (int i = 1 ; i <= a ; i++) 
    {
        for(int j = 1 ; j <= a ; j++)
        {
            if (i%b == 0) printf("#");
            else printf(".");
        }
        puts("");
    }
    puts("");

    for (int i = 1 ; i <= a ; i++) 
    {
        for(int j = 1 ; j <= a ; j++)
        {
            if (j%b == 0) printf("#");
            else printf(".");
        }
        puts("");
    }

    return 0;
}