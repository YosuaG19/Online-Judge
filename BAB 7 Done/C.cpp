#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct siswa{
    char ID[12], Nama[25];
}data[1005];

void swap(siswa *a, siswa *b){
    siswa temp = *a;
    *a = *b;
    *b = temp;
}

int partition(siswa *data, int start, int end){
    int i = start-1, r = (rand() % (end - start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (strcmp(data[j].ID, data[end].ID) < 0){
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

    quick(data, start, pivot - 1);
    quick(data, pivot + 1, end);
}

void display(siswa *data, int n){
    for (int i = 0 ; i < n ; i++){
        printf("%s %s\n", data[i].ID, data[i].Nama);
    }
}

int main (){
    FILE *f = fopen("testdata.in", "r");
    int n;
    fscanf(f, "%d", &n);fgetc(f);

    for (int i = 0 ; i < n ; i++){
        fscanf(f, "%s %s", data[i].ID, data[i].Nama);fgetc(f);
        // printf("%s %s\n", data[i].ID, data[i].Nama);
    }
    quick(data, 0, n-1);
    display(data, n);
}