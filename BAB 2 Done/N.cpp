#include<stdio.h>

int main (){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.2f%%\n", (1-b/a)*100);
}