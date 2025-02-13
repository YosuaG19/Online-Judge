#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    int input[tcase];
    for (int i = 0 ; i < tcase ; i++){
        scanf("%d", &input[i]);
    }

    int store[tcase];
    for (int i = 0 ; i < tcase ; i++){
        int total = 0;
        for (int j = 0 ; j < tcase ; j++){
            int temp = input[i];
            if (temp == input[j]) total ++;
        }
        store[i] = total;
    }

    for (int i = 0 ; i < tcase ; i++){
        for (int j = 1 ; j < tcase ; j++){
            if (store[i] < store[j]){
                int temp = store[i];
                store[i] = store[j];
                store[j] = temp;
            }
        }
    }
    printf("%d\n", store[0]);
}