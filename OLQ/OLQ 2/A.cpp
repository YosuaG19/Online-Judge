#include<stdio.h>
#include<string.h>

int main (){
    char a[21], b[21], c[21];
    for (int i = 0 ; i < 2 ; i++){
        scanf("%s %s %s", &a, &b, &c);getchar();
        printf("%sszs %sszs %sszs\n", a, b, c);
    }
}