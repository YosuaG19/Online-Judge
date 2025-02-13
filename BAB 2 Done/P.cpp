#include<stdio.h>

int main (){
    double a, b;
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf %lf", &a, &b);
        printf("$%.2lf\n", (b*100)/(100-a));
    }
    return 0;
}