#include<stdio.h>

int count = 0;
int f(int n){
    // printf("hahah %d : %d\n",count,  n);
    if (n == 1) {
        count++;
        return 1;
    }
    if(n%2 == 1){
        f(n-1);
        f(n+1);
    }if(n%2 == 0){
        f(n/2);
    }
    return n;
}

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int input, result;
         count = 0;
        scanf("%d", &input);
        result = f(input);
        printf("Case #%d: %d\n", i, count);
    }
}