#include<stdio.h>

int main(){
    int tcase; 
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);getchar();
        char string[a];
        scanf("%s", &string);
        b%=26;
        printf("Case #%d: ", i);
        for (int j = 0 ; j < a ; j++)
        {
            if ((string[j] + b) > 'z')
            {
                string[j] += b - 26;
            }
            else string[j] += b;
        }
        printf("%s\n", string);
    }
}