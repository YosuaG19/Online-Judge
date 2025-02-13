#include<stdio.h>

int main(){
    int nilai,tcase, input;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        nilai = 0;
        scanf("%d", &input);
        char a[input+1], b[input+1];        
        scanf("%s\n%s", &a, &b);
        for(int j = 0 ; j < input ; j++){
            if (a[j] == b[j]){
                nilai++;
            }
        }
        printf("Case #%d: %d\n", i, nilai*100/input);
    }
    return 0;
}