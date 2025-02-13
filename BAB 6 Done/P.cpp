#include<stdio.h>

int oddfibbo(int a){
    if (a == 0) return 0;
    if (a == 1 || a % 2 == 1) return 1;
    return oddfibbo(a-1) + oddfibbo(a-2);
}

int main (){
    int a;
    scanf("%d", &a);
    printf("%d\n", oddfibbo(a));
}