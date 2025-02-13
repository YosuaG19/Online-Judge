#include<stdio.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int row, col, count = 0;
        scanf("%d %d", &col, &row);
        long long int total[500] = {}, input, sum = 0;
        
        for (int j = 0 ; j < col ; j++, count++){
            for (int k = 0 ;  k < row ; k++){
                scanf("%lld", &input);
                if (k == 0) total[count] = input;
                if (total[count] <= input) total[count] = input;
            }
            sum += total[count];
        }

        printf("Case #%d: %lld\n", i, sum);

    }
}