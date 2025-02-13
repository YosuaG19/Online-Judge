#include<stdio.h>

int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( a>b&&a>c)
    {
        printf("Daging\n");
        if (b>c) printf("Sayur\nTelur\n");
        else printf("Telur\nSayur\n");
    }
    else if (b>a&&b>c)
    {
        printf("Sayur\n");
        if (a>c) printf("Daging\nTelur\n");
        else printf("Telur\nDaging\n");
    }
    else
    {
        printf("Telur\n");
        if (a>b) printf("Daging\nSayur\n");
        else printf("Sayur\nDaging\n");
    }
    return 0;
}