#include<stdio.h>

int main (){
    int tcase; 
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index, total = 0;
        scanf("%d", &index);
        long long int a[index], b[index];

        for (int j = 0 ; j < index ; j++){
            scanf("%lld", &a[j]);
        }
        for (int j = 0 ; j < index ; j++){
            scanf("%lld", &b[j]);
        }

        for (int j = 0 ; j < index ; j++){
            if (a[j] < b[j]){
                total ++;
            }
        }

        printf("Case #%d: %d\n", i , total);
    }
}