#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tanaman{
    int index;
    char nama[45];
};

int partition(tanaman *data, int start, int end){
    int i = start - 1, r = (rand() % (end - start)) + start;
    // printf("%s\n", pivot);
    tanaman temp = data[r];
    data[r] = data[end];
    data[end] = temp;

    for (int j = start ; j < end ; j++){
        if (strcmp(data[j].nama, data[end].nama) < 0){
            i++;
            // printf("%s < %s\n", data[j].nama, data[end].nama);
            // printf("%s <-> %s\n\n", data[i].nama, data[j].nama);
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    i++;
    temp = data[i];
    data[i] = data[end];
    data[end] = temp;

    return i;
}


void quick(tanaman *data, int start, int end){
    if (end <= start) return;
    int pivot = partition(data, start, end);

    quick(data, start, pivot-1);
    quick(data, pivot+1, end);
}


void display(tanaman *data, int n){
    for (int i = 0 ; i < n ; i++){
        printf("%d %s\n", data[i].index, data[i].nama);
    }
}

int main (){
    FILE *f = fopen("testdata.in", "r");
    int n;
    fscanf(f, "%d", &n);
    tanaman data[n];
    for (int i = 0 ; i < n ; i++){
        fscanf(f, "%d#%[^\n]", &data[i].index, data[i].nama);fgetc(f);
        // printf("%d %s\n", data[i].index, data[i].nama);
    }

    quick(data, 0, n-1);
    display(data, n);

    return 0;
}