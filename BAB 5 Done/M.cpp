#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index;
        scanf("%d", &index);
        long long int a[index][index];
        for (int j = 0 ; j < index ; j++){
            for (int k = 0 ; k < index ; k++){
                scanf("%lld", &a[j][k]);
            }
        }

        long long int total[index];
        for (int j = 0 ; j < 1 ; j++){
            total[j] = 0;
        }

        for (int j = 0 ; j < index ; j++){
            long long int temp = 0;
            for (int k = 0 ; k < index ; k++){
                temp += a[k][j];
            }
            total[j] = temp;
        }

        printf("Case #%d: ", i);
        for (int j = 0 ; j < index ; j++){
            // if (j == index-1){
            //     printf("%lld\n", total[j]);
            // }else{
            //     printf("%lld ", total[j]);
            // }
            j == index-1 ? printf("%lld\n", total[j]) : printf("%lld ", total[j]);
        }
    }
    

    return 0;
}