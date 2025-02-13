#include<stdio.h>

int main(){
    int a;
    double b;
    scanf("%d", &a);
    for (int i = 0 ; i < a ; i++)
    {
        scanf("%lf", &b);getchar();
        printf("%.2lf %.2lf %.2lf\n", b*4/5, b*9/5+32, b+273);
    }
    return 0;
}