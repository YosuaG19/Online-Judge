#include<stdio.h>
#include<string.h>

int fibbo(int a, int b, int c){
    if (a == 0) return b;
    if (a == 1) return c;
    return fibbo(a-1, b, c) - fibbo(a-2, b, c);
}

int main(){
    int tcase;
    scanf("%d", &tcase);
    for ( int i = 1 ; i <= tcase ; i++){
        int a, b, c, result;
        scanf("%d %d %d", &a, &b, &c);
        result = fibbo(a, b, c);
        printf("Case #%d: %d\n", i, result);
    }
    
    return 0;
}