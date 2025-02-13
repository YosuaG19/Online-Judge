#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index, array[1005], bibi, lili;
        scanf("%d", &index);
        for (int j = 0 ; j < 1000 ; j++){
            array[j] = 0;
        }
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &array[j]);
        }getchar();
        scanf("%d %d", &bibi, &lili);

        printf("Case #%d : ", i);
        if (array[bibi] == array[lili]){
            printf("Draw\n");
        }else if (array[bibi-1] > array[lili-1]){
            printf("Bibi\n");
        }else if (array[bibi-1] < array[lili-1]){
            printf("Lili\n");
        }
    }
}