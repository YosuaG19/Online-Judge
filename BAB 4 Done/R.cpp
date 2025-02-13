#include<stdio.h>

int scan()
{
    long long int input;
    scanf("%lld", &input);
    return input;
}

int second();

int main(){
    // long long int tcase, input, var, temp, result, resTemp;
    // tcase = scan();
    // for (int i = 1 ; i <= tcase ; i++)
    // {
    //     input = scan();
    //     for ( int j  = 0 ; j < input ; j++)
    //     {
    //         temp = var;
    //         var = scan();
    //         if (j == 0) temp = var;
    //         result = var - temp;
    //         if (result < 0) result *= -1;
    //         if (j == 1) resTemp = result;
    //         if (resTemp > result) resTemp = result;
    //     }
    //     printf("Case #%d: %lld\n", i, resTemp);
    // }
    
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int index;
        int array[1001], temp = 0, result;
        scanf("%d", &index);
        for (int j = 0 ; j < index ; j++){
            scanf("%d", &array[j]);
        }
        for (int j = 0 ; j < index-1 ; j++){
            result = array[j] - array[j+1];
            if (result < 0) result = -result;
            if (j == 0 || temp > result) temp = result;
        }

        printf("Case #%d: %d\n", i, temp);
    }
}

int second(){
    // int tcase;
    // scanf("%d", &tcase);
    // for (int i = 1 ; i <= tcase ; i++){
    //     int index;
    //     int array[1001] = {}, temp = 0, result = 0;
    //     scanf("%d", &index);
    //     for (int j = 0 ; j < index ; j++){
    //         scanf("%d", &array[j]);
    //     }
    //     for (int j = 0 ; j < index ; j++){
    //         result = array[j] - array[j+1];
    //         if (result < 0) result = -result;
    //         if (j == 0 || temp > result) temp = result;
    //     }

    //     printf("Case #%d: %d\n", i, temp);
    // }
    return 0;
}