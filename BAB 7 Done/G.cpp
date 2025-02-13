#include<stdio.h>

int bubble(int arr[], int n){
    int count = 0;
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }

    return count;
}

int main (){
    int tcase; 
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int n, mul;
        scanf("%d %d", &n, &mul);
        int arr[n+1] = {};
        for (int j = 0 ; j < n ; j++){
            scanf("%d", &arr[j]);
        }

        printf("Case #%d: %d\n", i, bubble(arr, n) * mul);
    }
}