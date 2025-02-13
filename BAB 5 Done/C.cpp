#include<stdio.h>

int main (){
    int index, tcase;
    scanf("%d", &index);
    int array[index];
    for (int i = 0 ; i < index ; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        array[a-1] = b;
        printf("Case #%d: ", i);
        for (int j = 0 ; j < index ; j++){
            if (j == index-1){
                printf("%d\n", array[j]);
            }else{
                printf("%d ", array[j]);
            }
        } 
    }
}