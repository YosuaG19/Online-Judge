#include<stdio.h>
#include<string.h>

int main (){
    int tcase;
    scanf("%d", &tcase);getchar();
    for (int i = 1 ; i <= tcase ; i++){
        int a, b, c[7] = {};
        scanf("%d %d", &a, &b);
        for (int j = 0 ; j < 6 ; j++){
            int multi = 10;
            c[j] = ((a%multi) + (b%multi)) %multi;
            a /= 10, b /= 10;
        }

        int flag = 0, answer = 0;
        for (int j = 5 ; j >= 0 ; j--){
            answer *= 10;
            answer += c[j];
        }
        printf("Case #%d: %d\n",i, answer);
    }
    return 0;
}