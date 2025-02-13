#include<stdio.h>

int main(){
    int a;
    double b, c;
    scanf("%d", &a);
    for (int i = 0; i < a ; i++)
    {
        scanf("%lf %lf", &b, &c);getchar();
        printf("%.2lf\n", c*b/100);
    }
    return 0;
}