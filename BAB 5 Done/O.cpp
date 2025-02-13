#include<stdio.h>

int main(){
    int tcase, flag = 1;
    scanf("%d", &tcase);
    int mat[tcase][tcase];
    for (int t = 0 ; t < tcase ; t++){
        for (int k = 0 ; k < tcase ; k++){
            scanf("%d", &mat[t][k]);
        }
    }
    
    for (int i = 0 ; i < tcase ; i++){
        for (int j = 0 ; j < tcase ; j++){
            for (int k = 1 ; k < tcase ; k++){
                if (j + k >= tcase) break;
                if (mat[i][j] == mat[i][j+k] || mat[i][j] == mat[j+k][i]){
                    flag = 0;
                    break;
                }
            }
            if (!flag) break;
        }
        if(!flag) break;
    }

    if(flag) printf("Yay\n");
    else printf("Nay\n");
}