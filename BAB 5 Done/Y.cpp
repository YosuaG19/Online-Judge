#include<stdio.h>
#include<string.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i<= tcase ; i++){
        int change;
        char code[1005] = {};
        scanf("%d %s", &change, &code);getchar();
        for (int j = 0 ; j < change ; j++){
            int a, b;
            scanf("%d %d", &a, &b);
            if (b > a){
                int length = b-a;
                for (int j = 0 ; j < length/2 + 1; j++, a++ , b--){
                    char temp = code[a-1];
                    code[a-1] = code[b-1];
                    code[b-1] = temp;
                }
            }else if (b < a){
                int length = a-b;
                for (int j = 0 ; j < length/2 + 1 ; j++, a-- , b++){
                    char temp = code[a-1];
                    code[a-1] = code[b-1];
                    code[b-1] = temp;
                }
            }
        }
        printf("Case #%d: %s\n", i, code);
    }
    return 0;
}