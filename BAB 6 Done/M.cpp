#include<stdio.h>

int checker(int a, int b){
    if (a == b) return 1;
    if (a == 1) {
        if (b == 1) return 1;
        else return 0;
    }
    if (a%2 == 0) a /= 2;
    else if (a%2 == 1) a = a*3+1;
    return checker(a, b);
}

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %s\n", i, checker(a, b) == 1 ? "YES" : "NO");
    }
}