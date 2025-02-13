#include<stdio.h>

int a(int m, int n){
    int result;
    if (m == 0) result =  n+1;
    if (m > 0 && n == 0) result =  a(m-1, 1);
    if (m > 0 && n > 0) result =  a(m-1, a(m, n-1));
    return result;
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int result = a(m, n);
    printf("result: %d\n", result);
}