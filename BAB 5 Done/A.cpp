#include<stdio.h>

int main (){
    int input, tcase;
    scanf("%d",  &input);
    int array[input+1];
    for (int i = 0 ; i < input ; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int a, b ,ttl = 0;
        scanf("%d %d", &a, &b);
        for (int j = a-1 ; j <=b-1 ; j++){
            ttl += array[j];
        }
        printf("Case #%d: %d\n", i, ttl);
    }

}