#include<stdio.h>

int main (){
    char N[11], M[101], C;
    int O;
    scanf("%s", &N);getchar();
    scanf("%[^\n]\n%c %d", &M, &C, &O);
    printf("Id    : %s\nName  : %s\nClass : %c\nNum   : %d\n", N, M, C, O);
    return 0;
}