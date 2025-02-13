#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    long long int fibbo[91];
    for (int j = 2 ; j < 91 ; j++){
        fibbo[0] = 0, fibbo[1] = 1;
        fibbo[j] = fibbo[j-1] + fibbo[j-2];
    }
    for (int i = 1 ; i <= tcase ; i++){
        int index;
        scanf("%d", &index);
        printf("Case #%d: %lld\n", i, fibbo[index-1]);
    }
}