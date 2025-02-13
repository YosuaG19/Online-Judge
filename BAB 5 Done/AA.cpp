#include<stdio.h>

int main(){
    long long int tcase, ttl = 0;
    scanf("%lld", &tcase);
    long long int array[tcase+1], temp = 0;
    for (int i = 0 ; i < tcase ; i++){
        scanf("%lld", &array[i]);
    }
    for (int i = 0 ; i < tcase ; i++){
        for (int j  = i+1 ; j < tcase ; j++){
            if (array[i] == array[j]){
                ttl++;  break;
            }
        }
    }

    printf("%lld\n", tcase-ttl);
}