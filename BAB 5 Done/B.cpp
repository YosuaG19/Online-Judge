#include<stdio.h>

int main(){

    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index;
        scanf("%d", &index);
        int a[index], b[index];
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &a[j]);
        }getchar();
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &b[j]);
        }

        printf("Case #%d: ", i);
        for (int j = 0 ; j < index ; j++){
            if (j == index-1){
                printf("%d\n", a[j]-b[j]);
            }else{
                printf("%d ", a[j]-b[j]);
            }
        }
    }

    return 0;
}