#include<stdio.h>

int nofibbo(int a, int b, int c){
    if (c == 0) return a;
    if (c == 1) return b;
    return nofibbo(a, b, c-1) + nofibbo(a, b, c-2);
}


int main (){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", nofibbo(a, b, c));
}