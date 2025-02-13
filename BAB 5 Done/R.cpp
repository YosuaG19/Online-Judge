#include<stdio.h>
#include<string.h>

int main (){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        char string[1005];
        scanf("%s", &string);
        int index, len = strlen(string);
        scanf("%d", &index);getchar();
        for (int j = 0 ; j < index ; j++){
            char a, b;
            scanf("%c %c", &a, &b);getchar();
            for (int k = 0 ; k < len ; k++){
                if (string[k] == a){
                    string[k] = b;
                }
            }
        }

        printf("Case #%d: %s\n", i, string);
    }
    return 0;
}