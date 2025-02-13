#include<stdio.h>

int main (){
   int tcase;
   scanf("%d", &tcase);
   int input, valid[101] = {}, count = 0;
   for (int i = 0 ; i < tcase ; i++){
        for (int j = 0 ; j < tcase ; j++){
            scanf("%d", &input);
            if (valid[input] >= 0 && input != 0){
                valid[input] ++;
            }
        }
   }
   for (int j = 1 ; j <= tcase ; j++){
            if (valid[j] < tcase){
                count++;
            }
        }
    printf("%d\n", count);
}   