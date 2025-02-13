#include<stdio.h>

int f(int n){
    int result = 0, a;
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &a);
        result += a;
    }
    return result;
}

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int n;
        scanf("%d", &n);
        int result = f(n);
        printf("Case #%d: %d\n", i, result);
    }
}