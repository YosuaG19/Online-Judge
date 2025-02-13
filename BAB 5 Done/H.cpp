#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int a;
        scanf("%d", &a);
        long long int array[a][a], total[a];
        for (int j = 0 ; j < a ; j++){
            total[j] = 0;
            for (int k = 0 ; k < a ; k++){
                scanf("%lld", &array[j][k]);
            }
        }

        for (int j = 0 ; j < a ; j++){
            for (int k = 0 ; k < a ; k++){
                total[j] += array[k][j];
            }
        }

        printf("Case #%d: ", i);
        for (int j = 0 ; j < a ; j++){
            if(j == a-1){
                printf("%lld\n", total[j]);
            }else{
                printf("%lld ", total[j]);
            }
        }
    }
}