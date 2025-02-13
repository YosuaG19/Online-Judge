#include<stdio.h>

int main (){
    FILE *f = fopen("testdata.in", "r");
    int a, b;
    fscanf(f, "%d %d", &a, &b);
    printf("%d\n", a+b);
}	
