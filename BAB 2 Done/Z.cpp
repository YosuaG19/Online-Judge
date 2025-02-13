#include<stdio.h>

int main(){
    int s;
    double a, b, c, d;
    scanf("%d", &s);
    for (int i = 0 ; i < s ; i++)
    {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        printf("%.2lf\n", (2*a)+(2*b)+(c*4/3)+(d/2));
    }
    return 0;
}