#include<stdio.h>

int main (){
    float a, b, c, d;
    for (int i = 0; i < 3; i++)
    {
        scanf("%f %f %f %f", &a, &b, &c, &d);
        printf("%.2f\n", (2*a)+(2*b)+(2*c)+d);
    }
    return 0;
}