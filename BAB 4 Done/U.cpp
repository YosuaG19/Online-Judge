#include<stdio.h>

int main(){
    int tcase, a;
    char s[101];
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase; i++)
    {
        int b = 0;
        scanf("%d", &a);getchar();
        scanf("%s", &s);
        for (int j = 0 ; j < a ; j++)
        {
            if (s[j] == 'L') b++;
            else if (s[j] == 'T') b=b;
            else if (s[j] == 'B')b--;
        }
        if (b > 0) printf("Lili\n");
        else if (b == 0) printf("None\n");
        else printf("Bibi\n");
    }
    return 0;
}