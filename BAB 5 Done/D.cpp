#include<stdio.h>

int main (){
    int p, l;
    scanf("%d %d", &p, &l);
    int matrix[p][l];
    for (int i = 0 ; i < p ; i++){
        for (int j = 0 ; j < l ; j++){
            scanf("%d", &matrix[i][j]);
        }
    }getchar();

    int tcase;
    scanf("%d", &tcase);
    for (int i = 0 ; i < tcase ; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        matrix[a-1][b-1] = c;
    }

    for (int i = 0 ; i < p ; i++){
        for (int j = 0 ; j < l ; j++){
            if (j == l-1){
                printf("%d\n", matrix[i][j]);
            }else{
                printf("%d ", matrix[i][j]);
            }
        }
    } 
    
}