#include<stdio.h>

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index;
        scanf("%d", &index);
        int a[index];
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &a[j]);
        }

        for (int j = 0 ; j < 2 ; j++){
            for (int k = 1+j; k < index ; k++){
                if (a[j] < a[k]){
                    int temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }

        int total = 0;
        for (int j = 0 ; j < 2 ; j++){
            total += a[j];
        }

        printf("Case #%d: %d\n", i, total);
    }
}