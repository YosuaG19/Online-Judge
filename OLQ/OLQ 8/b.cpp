#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct nama{
    char name[1000];
}data[1005];

void swap(nama *a, nama *b){
    nama temp = *a;
    *a = *b;
    *b = temp;
}

int partition(nama *data, int start, int end, int x){
    int i = start - 1, r = (rand() % (end- start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (x > 0){
            if (strcmp(data[j].name, data[end].name) > 0){
                i++;
                swap(&data[i], &data[j]);
            }
        }
        else{
            if (strcmp(data[j].name, data[end].name) < 0){
                i++;
                swap(&data[i], &data[j]);
            }
        }
    }
    i++;
    swap(&data[i], &data[end]);

    return i;
}

void quick(nama *data, int start, int end, int x){
    if (end <= start) return;

    int pivot = partition(data, start, end, x);

    quick(data, start, pivot-1, x);
    quick(data, pivot+1, end, x);
}

void display(nama *data, int n){
    for (int i = 0 ; i < n ; i++){
        printf("%s\n", data[i].name);
    }
}

int main(){
    int n, x;
    scanf("%d", &n);getchar();
    for (int i = 0 ; i < n ; i++){
        scanf("%s", data[i].name);getchar();
    }
    scanf("%d", &x);
    quick(data, 0, n-1, x);
    display(data, n);

    return 0;
}