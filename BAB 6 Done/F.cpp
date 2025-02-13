#include<stdio.h>
#include<string.h>

void reverse(char string[1005]){
    for (int i = strlen(string) - 1 ; i >=0 ; i--){
        printf("%c", string[i]);
    }
    
}

int main (){
    int tcase;
    scanf("%d", &tcase);getchar();
    for (int i = 1 ; i <= tcase ; i++){
        char string[1005];
        scanf("%[^\n]", string);getchar();
        printf("Case #%d: ", i);
        reverse(string);
        puts("");
    }
}