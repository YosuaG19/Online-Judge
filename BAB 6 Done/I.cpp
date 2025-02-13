#include<stdio.h>

int count = 0;

int fibbo(int n){
    if (n == 0) {
        count++;
        return 0;
    }
    if (n == 1){
        count++;
        return 1;
    } 
    count++;
    return fibbo(n-1) + fibbo(n-2);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        count = 0;
        int n, result;
        scanf("%d", &n);
        result = fibbo(n);
        printf("Case #%d: %d\n", i, count);
    }
}