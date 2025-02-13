#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end){
    int i = start-1, r = (rand() % (end -start)) + start;
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

int binary_search(int arr[], int search, int n){
    int h = n-1, l = 0, m;
    while (l <= h){
        m = (l + h)/2;
        if (arr[m] == search) return m+1;
        else {
            if (arr[m] > search) h = m-1;
            else l = m+1;
        }
    }
    return -1;
}

int main (){
    int n;
    scanf("%d", &n);

    int arr[n+1] = {};
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    quick(arr, 0, n-1);

    // for (int i = 0 ; i < n ; i++){
    //     printf("%d ", arr[i]);
    // }puts("");

    int q;
    scanf("%d", &q);
    for (int i = 0 ; i < q ; i++){
        int search;
        scanf("%d", &search);
        
        printf("%d\n", binary_search(arr, search, n));

    }
}