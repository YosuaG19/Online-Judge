#include<stdio.h>
#include<string.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        char string[1000] = {};
        scanf("%s", &string);
        int len = strlen(string);
        printf("Case #%d:\n", i);

        for (int j = 0 ; j < len ; j++){
            if ('A' <= string[j] && string[j] <= 'D'){
                printf("A");
            }else if ('E' <= string[j] && string[j] <= 'H'){
                printf("E");
            }else if ('I' <= string[j] && string[j] <= 'N'){
                printf("I");
            }else if ('O' <= string[j] && string[j] <= 'T'){
                printf("O");
            }else if ('U' <= string[j] && string[j] <= 'Z'){
                printf("U");
            }
        }
        puts("");

        for (int j = 0 ; j < len ; j++){
            if ('A' <= string[j] && string[j] <= 'D'){
                printf("%d", string[j] - 'A');
            }else if ('E' <= string[j] && string[j] <= 'H'){
                printf("%d", string[j] - 'E');
            }else if ('I' <= string[j] && string[j] <= 'N'){
                printf("%d", string[j] - 'I');
            }else if ('O' <= string[j] && string[j] <= 'T'){
                printf("%d", string[j] - 'O');
            }else if ('U' <= string[j] && string[j] <= 'Z'){
                printf("%d", string[j] - 'U');
            }
        }
        puts("");
    }
}