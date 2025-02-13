#include<stdio.h>
int count = 1;

int loser(long long int input){
    if (input == 1 ){
        if (count % 2 == 0) return 0;
        else if (count % 2 == 1)return 1;
    }
    if (input % 2 == 0){
        count++;
        input/=2;
    }else if (input % 2 != 0){
        count++;
        input = input*3+1;
    }
    return loser(input);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        long long int input;
        count = 0;
        scanf("%lld", &input);
        printf("Case #%d: %s\n", i, loser(input) ? "Jojo": "Lili");
    }    
}