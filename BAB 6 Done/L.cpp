#include<stdio.h>

int nofibbo(int a, int b, int c){
    if (a == 0) return b;
    if (a == 1) return c;
    return nofibbo(a-1, b, c) - nofibbo(a-2, b, c);
}

int main (){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("Case #%d: %d\n", i, nofibbo(a, b, c));
    }
}