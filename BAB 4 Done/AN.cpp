#include<stdio.h>

int main(){
    char s[7] = "ashiap";
    int tcase, a[7];
    scanf("%d", &tcase);
    for (int i = 1; i <= tcase ; i++)
    {
        for (int j = 0; j < 6 ; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("Case #%d: ", i);
        for (int k = 0 ; k < 6; k++)
        {
            for (int l = 0; l < a[k]; l++) printf("%c", s[k]);
        }
        puts("");
    }
    
}