#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int a;
        scanf("%d", &a);
        int matrix = 5, b[matrix][a][a];
        for (int l = 0 ; l < 3 ; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    scanf("%d", &b[l][j][k]);
                }
            }
        }

       int add = 0;
        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    add += b[0][l][k] * b[1][k][j];
                }
                b[3][l][j] = add;
                add = 0;
            }
        }


        add = 0;
        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    add += b[3][l][k] * b[2][k][j];
                }
                b[4][l][j] = add;
                add = 0;
            }
        }

        printf("Case #%d:\n", i);
        for (int l = 0 ; l < 1; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    if (k == a-1){
                        printf("%d\n", b[4][j][k]);
                    }else printf("%d ", b[4][j][k]);
                    
                }
            }
        }
    }

    
}

int second(){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int a;
        scanf("%d", &a);
        int mat1[a][a], mat2[a][a], mat3[a][a], result1[a][a], result2[a][a];
        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                scanf("%d", &mat1[l][j]);
            }
        }

        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                scanf("%d", &mat2[l][j]);
            }
        }

        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                scanf("%d", &mat3[l][j]);
            }
        }

       int add = 0;
        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    add += mat1[l][k] * mat2[k][j];
                }
                result1[l][j] = add;
                add = 0;
            }
        }


        add = 0;
        for (int l = 0 ; l < a ; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    add += result1[l][k] * mat3[k][j];
                }
                result2[l][j] = add;
                add = 0;
            }
        }

        printf("Case #%d:\n", i);
        for (int l = 0 ; l < 1; l++){
            for (int j = 0 ; j < a ; j++){
                for (int k = 0 ; k < a ; k++){
                    if (k == a-1){
                        printf("%d\n", result2[j][k]);
                    }else printf("%d ", result2[j][k]);
                    
                }
            }
        }
    }
}