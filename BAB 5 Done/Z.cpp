#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int length, breath;
        scanf("%d %d", &length, &breath);getchar();
        char plot[10005] = {};
        scanf("%s", &plot);

        int first = -1, last = -1, stair = 0;

        for (int j = 0 ; j < length ; j++){
            if (plot[j] == '1'){
                first = j+1;
                break;
            }
        }

        for (int j = length-1 ; j >= 0 ; j--){
            if (plot[j] == '1'){
                last = j;
                break;
            }
        }

        for (int j = 0; j < length ; j ++){
            if (plot[j] == '1'){
                stair++;
            }
        }

        printf("Case #%d: ", i);
        if (breath >= length){
            printf("Alive\n");
        }else if (last == -1){
            printf("Dead\n");
        }else if ((first <= breath) && (length - last <= breath) && (stair != 1)){
            printf("Alive\n");
        } else printf("Dead\n");
    }
    return 0;
}