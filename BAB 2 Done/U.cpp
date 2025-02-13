#include<stdio.h>

int main(){
    int a;
    double b, c;
    scanf("%d", &a);
    for (int i = 0 ; i < a; i++)
    {
        scanf("%lf %lf", &b, &c);
        printf("%.2lf\n", (b*c)/360);
    }
    return 0;
}