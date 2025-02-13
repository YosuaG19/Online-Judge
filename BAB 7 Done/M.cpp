#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end){
    int i = start-1, r = (rand() % (end-start)) + start;
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

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1] = {0};
    
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    quick(arr, 0, n-1);

    int mid = n % 2 == 0 ? n/2 : n/2+1;

    for (int i = n/2+1 ; i < n ; i++){
        if (i != n-1) printf("%d ", arr[i]);
        else printf("%d\n", arr[i]);
    }
}