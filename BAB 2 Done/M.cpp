#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.2f%%\n", (a*100)/b);
    return 0;
}