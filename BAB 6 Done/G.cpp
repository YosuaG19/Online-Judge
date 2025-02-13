#include<stdio.h>
#include<string.h>

bool palindrome(char str[]){
    int flag = 1, l = strlen(str);
    for (int i = 0, j = l - 1 ; i <= j ; i++, j--){
        if (str[i] != str[j]) {
            flag = 0;
            break;   
        }
    }
    return flag ? true : false;
}

int main (){
    int tcase;
    scanf("%d", &tcase);getchar();
    for(int i = 1 ; i <= tcase ; i++){
        char str[1005];
        scanf("%s", str);getchar();
        printf("Case #%d: %s\n", i, palindrome(str) ? "yes" : "no");
    }
}