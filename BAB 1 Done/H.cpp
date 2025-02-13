#include<stdio.h>

int main (){
    char s[101];
    scanf("%[^\n]", &s);
    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", s);
    return 0;
}