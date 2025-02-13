#include<stdio.h>

int main(){
    long long int tcase, b = 1;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        b += i + 1;
    }
    printf("%lld\n", b);
}