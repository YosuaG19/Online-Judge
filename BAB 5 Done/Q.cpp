#include<stdio.h>
#include<string.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int a, b, c, come, result[b] = {}, fren[a][b];
        scanf("%d %d %d", &a, &b, &c);
        for (int j = 0 ; j < a ; j++){
            for (int k = 0 ; k < b ; k++){
                scanf("%d", &fren[j][k]);
            }
        }
        for (int j = 0 ; j < c ; j++){
            scanf("%d", &come);
            for (int k = 0 ; k < b ; k++){
                result[k] += fren[come-1][k];
                result[k] %= 2;
            }
        }
        printf("Case #%d:\n", i);
        for (int j = 0 ; j < b ; j++){
            printf("%s\n", result[j] ? "YES" : "NO");
        }
    }
}