#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ;  i++){
        int ttl_int, total = 0, lefties = 0, truth = 0;
        scanf("%d", &ttl_int);
        int input[ttl_int];
        for (int j = 0 ; j < ttl_int ; j++){
            scanf("%d", &input[j]);
            total += input[j];
        }
        printf("Case #%d: ", i);
        for (int k = 0 ; k < ttl_int; k++){
            if (lefties == total){
                k = ttl_int;
                truth = 1;
            }
            lefties += input[k];
            total -= input[k];
        }
        if (truth == 1) printf("Yes\n");
        else printf("No\n");
    }
}