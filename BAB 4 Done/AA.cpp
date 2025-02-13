#include<stdio.h>

int main(){
    long long int a, b = 0, c = 0;
    scanf("%d", &a);
    for (int i = 0 ; i < a; i++)
    {
        scanf("%lld", &b);
        if (b >=2 && b <= 12){
            c+=b;
            if (c == 9) c = 21;
            if (c == 33) c = 42;
            if (c == 76) c = 92;
            if (c == 53) c = 37;
            if (c == 80) c = 59;
            if (c == 97) c = 88;
        }
    }
    printf("%lld\n", c);
}