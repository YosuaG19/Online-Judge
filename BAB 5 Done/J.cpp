#include<stdio.h>
#include<string.h>

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        char string[1005];
        scanf("%s", &string);
        int len = strlen(string);

        printf("Case %d: ", i);
        for (int j = 0 ; j < len ; j++){
            if (j == len-1){
                printf("%d\n", string[j]);
            }else{
                printf("%d-", string[j]);
            }
        }
    }
}