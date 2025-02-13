#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index, array[201], total = 0;
        scanf("%d", &index);
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &array[j]);
        }
        int flag = 0;

        for(int j = 0 ; j < index ; j++){
            int flag = 0;
            for (int k = 0 ; k < index ; k++){
                for (int l = k+1 ; l < index ; l++){
                    if (array[j] == array[k] + array[l]){
                        total++;
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1){
                    break;
                }
            }
        }
        printf("Case #%d: %d\n", i, total);
    }
}