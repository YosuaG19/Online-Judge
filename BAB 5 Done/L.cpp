#include<stdio.h>

int main (){
    int tcase;
    scanf("%d", &tcase);
    int a[tcase], b[tcase];
    for (int i = 0 ; i < tcase ; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0 ; i < tcase ; i++){
        scanf("%d", &b[i]);
    }

    for (int i = 0 ; i < tcase ; i++){
        for (int j = 1+i ; j < tcase ; j++){
            if (a[i] > a[j]){
                int temp = a[i], temp1 = b[i];
                a[i] = a[j], b[i] = b[j];
                a[j] = temp, b[j] = temp1; 
            }
        }
    }

    for (int i = 0; i < tcase ; i++){
        if (i == tcase-1){
            printf("%d\n", b[i]);
        }else{
            printf("%d ", b[i]);
        }
    }

    return 0;
}