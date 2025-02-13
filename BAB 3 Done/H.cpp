#include<stdio.h>

int main (){
    char x, y, z;
    scanf("%c %c %c", &x, &y, &z);
    if (x>y&&x>z)
    {
        if (y>z) printf("3 2 1\n");
        else printf("2 3 1\n");
    }
    else if (y>x&&y>z)
    {
        if (x>z) printf("3 1 2\n");
        else printf("1 3 2\n");
    }
    else
    {
        if (x>y) printf("2 1 3\n");
        else printf("1 2 3\n");
    }
    return 0;
}