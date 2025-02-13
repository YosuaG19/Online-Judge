#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct siswa{
    int q;
    char nama[55];
}data[10005];

void swap(siswa *a, siswa *b){
    siswa temp = *a;
    *a = *b;
    *b = temp;
}

int partition(siswa *data, int start, int end){
    int i = start-1, r = (rand() & (end-start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (data[j].q > data[end].q || (data[j].q == data[end].q && strcmp(data[j].nama, data[end].nama) < 0)){
            i++;
            swap(&data[i], &data[j]);
        }
    }
    i++;
    swap(&data[i], &data[end]);

    return i;
}

void quick(siswa *data, int start, int end){
    if (end <= start) return;

    int pivot = partition(data, start, end);

    quick(data, start, pivot-1);
    quick(data, pivot+1, end);
}

void display(siswa *data, int n){
    for (int i = 0 ; i < n ; i++){
        printf("%s %d\n", data[i].nama, data[i].q);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++){
        scanf("%s %d", data[i].nama, &data[i].q);getchar();
    }

    quick(data, 0, n-1);
    display(data, n);

    return 0;
}