#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end){
    int i = start -1, r = (rand() % (end -start)) + start;
    swap(&arr[r], &arr[end]);

    for (int j = start ; j < end ; j++){
        if (arr[j] < arr[end]){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);

    return i;
}

void quick(int arr[], int start, int end){
    if (end <= start) return;

    int pivot = partition(arr, start, end);
    quick(arr, start, pivot-1);
    quick(arr, pivot+1, end);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int arr[26] = {};
        for (int j = 0 ; j < 25 ; j++){
            scanf("%d", &arr[j]);
        }
        quick(arr, 0, 24);
        int y1 = arr[0]/2;
        int y5 = arr[24]/2;
        int y2 = arr[1] - y1;
        int y3 = arr[4] - y1;
        int y4 = arr[23] - y5;

        printf("Case #%d: %d %d %d %d %d\n", i, y1, y2, y3, y4, y5);
    }
    return 0;
}