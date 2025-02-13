#include<stdio.h>
#include<stdlib.h>

int a[1000*1000];

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        for (int j = 1 ; j <= 1000 * 1000 ; j++){
            a[j] = 0;        }
        int index, input, count = 0;
        scanf("%d", &index);
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &input);
            if (a[input] == 0){
                a[input] = input;
            }else if (a[input] == input){
                count++;
            }
        }

        printf("Case #%d: %d\n", i , index - count);
    }
    
    getchar();
    return 0;
}