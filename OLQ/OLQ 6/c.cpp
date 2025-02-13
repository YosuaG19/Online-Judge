#include<stdio.h>
#include<string.h>

int fibbo(int a){
    if (a == 0) return 0;
    if (a == 1 || a == 2) return 1;
    return fibbo(a-1) + fibbo(a-3);
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", fibbo(a));
    
    return 0;
}