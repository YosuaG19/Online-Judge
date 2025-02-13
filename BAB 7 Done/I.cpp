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


int main (){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int n;
        scanf("%d", &n);
        int arr[n+1] = {};
        for (int j = 0 ; j < n ; j++){
            scanf("%d", &arr[j]);  
        }

        quick(arr, 0, n-1);

        int left[n/2+1] = {}, right[n/2+1] = {}, data[n-1] = {};
        for (int j = 0, k = 0, l = 0 ; j < n ; j++){
            if (j < n/2) {
                left[j] = arr[j];
                if (j != 0){
                    data[l] = left[j] - left[j-1];
                    l++;
                }
            }
            else {
                right[k] = arr[j];
                if (k != 0){
                    data[l] = right[k] - right[k-1];
                    l++;
                }
                k++;
            }
        }

        quick(data, 0, n-3);
        printf("Case #%d: %d\n", i, data[n-3]);

    }
}