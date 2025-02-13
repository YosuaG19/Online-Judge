#include<stdio.h>

int main (){
    double a, b;
    scanf("%lf %lf", &a, &b);
    a+=a*b/100, a+=a*b/100, a+=a*b/100;
    printf("%.2lf\n", a);
    return 0;
}