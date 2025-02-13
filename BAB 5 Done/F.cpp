#include<stdio.h>
#include<string.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        char string[100005];
        scanf("%s", &string);
        int len = strlen(string), alpahbet[26], total=0;

        for (int j = 0 ; j < 26 ; j++){
            alpahbet[j] = 0;
        }

        for (int j = 0 ; j < len ; j ++){
            alpahbet[string[j]-'a'] = 1;
            // printf("%d\n", string[j]-'a');
        }

        for (int j = 0 ; j < 26 ; j++){
            total += alpahbet[j];
        }

        printf("Case #%d: ", i);
        if (total % 2 == 0){
            printf("Yay\n");
        }else{
              printf("Ewwww\n");
        }
    }


    return 0;
}