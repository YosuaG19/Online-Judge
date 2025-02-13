#include<stdio.h>

int main (){
    double a, b, c, d, e, f;
    scanf("%lf", &a);
    scanf("%lf %lf %lf", &b, &c, &d);
    for (int i = 1 ; i <= a ; i++)
    {
        scanf("%lf", &e);
        f += e;
    }
    f+=b, f+=c, f+=d, f/=(a+3.0);
    if (b>=f)printf("Jojo lolos\n");
    else printf("Jojo tidak lolos\n");
    if (c>=f)printf("Lili lolos\n");
    else printf("Lili tidak lolos\n");
    if (d>=f)printf("Bibi lolos\n");
    else printf("Bibi tidak lolos\n");
    
}