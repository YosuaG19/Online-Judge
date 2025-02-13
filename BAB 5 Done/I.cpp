#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index;
        scanf("%d", &index);
        long long int array[index];
        for (int j = 0 ; j < index ; j++){
            scanf("%lld", &array[j]);
        }

        printf("Case #%d: ",i);
        for (int k = index-1 ; k >=0 ; k--){
            if (k == 0){
                printf("%lld\n", array[k]);
            }else{
                printf("%lld ", array[k]);
            }
        }
    }
}