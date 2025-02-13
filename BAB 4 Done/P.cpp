#include<stdio.h>

int main (){
   long long int a, b, c, d;
   scanf("%lld", &a);
   for (int i = 1 ; i <= a ; i++) 
   {
        c = 0, d = 0;
        scanf("%lld", &b);
        for (int j = 1; j <= 999999 ; j++)
        {
            if (b <= c) break;
            c+=j, d++;
        }
        printf("Case #%d: %lld\n", i, d);
   }
}  