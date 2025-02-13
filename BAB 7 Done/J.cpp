#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int end, int start){
    int i = start - 1, r = (rand() % (end - start)) + start;
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

void quick(int arr[], int end, int start){
    if (end <= start) return;

    int pivot = partition(arr, end, start);

    quick(arr, pivot-1, start);
    quick(arr, end, pivot+1);
}


int main (){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int n;
        long long ttl = 0;
        scanf("%d", &n);
        int arr[5001] = {};
        for (int j = 0 ; j < n ; j++){
            scanf("%d", &arr[j]);
            ttl += arr[j];
        }

        quick(arr, n-1, 0);
        double med = 0;
        if (n%2 != 0){
            med = arr[n/2] * 1.00;
        }else{
            med = (arr[n/2] + arr[n/2-1])*1.0 / 2.0;
        }
        double mean = (ttl*1.0)/(n*1.0);

        printf("Case #%d:\n", i);
        printf("Mean : %.2lf\n", mean);
        printf("Median : %.2lf\n", med);

    }
}