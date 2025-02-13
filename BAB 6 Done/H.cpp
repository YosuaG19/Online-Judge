#include<stdio.h>
char a, b;

int fibbo(int n){
    if (n == 0) {
        printf("%c", a);
        return 0;
    }
    if (n == 1) {
        printf("%c", b);
        return 1;
    }
    return fibbo(n-1) + fibbo(n-2);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int n, result;
        scanf("%d %c %c", &n, &a ,&b);
        printf("Case #%d: ", i);
        result = fibbo(n);
        puts("");
    }
}