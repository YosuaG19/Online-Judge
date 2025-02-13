#include<stdio.h>

int main (){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.4f%%\n", (b*100)/a);
    return 0;
}