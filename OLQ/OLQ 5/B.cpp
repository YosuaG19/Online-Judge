#include<stdio.h>

int main (){
    int tcase;
    scanf("%d", &tcase);
    long long int array[tcase], total = 0;
    for (int i = 0 ; i < tcase ; i++){
        scanf("%lld", &array[i]);
        if (array[i] >= 0) total += array[i];
    }
    int count = 0;
    if (total % 2 == 0){
        printf("%lld\n", total);
    }else{
        do{
            if (array[count] % 2 == 1){
                total -= array[count];
                break;
            }
            count++;
        }while (1);
        printf("%lld\n", total);
    }
}
