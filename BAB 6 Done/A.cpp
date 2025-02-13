#include<stdio.h>

int f(int n, int &count){ //count pakai passing by reference
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n%3 == 0) count++;
    if (n%5 == 0) return n*2;
    return f(n-1, count) + n + f(n-2, count) + n - 2;
}

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int n;
        int count = 0;
        scanf("%d", &n);
        int value = f(n, count);
        printf("Case #%d: %d %d\n", i, value , count);
    }
    return 0;
}