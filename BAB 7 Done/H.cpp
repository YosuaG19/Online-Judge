#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
    char nama[205];
}arr[205];

void swap(data *a, data *b){
    data t = *a;
    *a = *b;
    *b = t;
}

int partition_char(data arr[], int start, int end, int index){
    int i = start - 1;
    for (int j = start ; j < end ; j++){
        if (arr[index].nama[j] < arr[index].nama[end]){
            i++;
            char t = arr[index].nama[i];
            arr[index].nama[i] = arr[index].nama[j];
            arr[index].nama[j] = t;
        }
    }
    i++;
    char t = arr[index].nama[i];
    arr[index].nama[i] = arr[index].nama[end];
    arr[index].nama[end] = t;
    return i;
}

void quick_char(data arr[], int start, int end, int index){
    if (end <= start) return;

    int pivot = partition_char(arr, start, end, index);

    quick_char(arr, start, pivot - 1, index);
    quick_char(arr, pivot + 1, end, index);
}

int partition_arr(data *arr, int start, int end){
    int i = start - 1, r = (rand() % (end-start)) + start;
    swap(&arr[r], &arr[end]);

    for (int j = start; j < end ; j++){
        if (strcmp(arr[j].nama, arr[end].nama) > 0){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}

void quick_arr(data *arr, int start, int end){
    if (end <= start) return;

    int pivot = partition_arr(arr, start, end);

    quick_arr(arr, start, pivot - 1);
    quick_arr(arr, pivot + 1 , end);
}

int main (){
    int a,b ;
    scanf("%d %d", &a, &b);getchar();
    for (int i = 0 ; i < a ; i++){
        scanf("%s", arr[i].nama);getchar();
        quick_char(arr, 0, b-1, i);
    }

    quick_arr(arr, 0 , a-1);
    for (int i = 0 ; i < a ; i++){
        printf("%s\n", arr[i].nama);
    }
}