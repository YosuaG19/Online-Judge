#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct kota{
    double suhu;
    double temp;
    char opt;
    char nama[1005];
}data[101];

void swap(kota *a, kota *b){
    kota temp = *a;
    *a = *b;
    *b = temp;
}

int partition(kota *data, int start, int end){
    int i = start-1, r = (rand()%(end-start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (data[j].temp < data[end].temp || (data[j].temp == data[end].temp && strcmp(data[j].nama, data[end].nama) < 0)){
            i++;
            swap(&data[i], &data[j]);
        }
    }
    i++;
    swap(&data[i], &data[end]);

    return i;
}

void quick(kota *data, int start, int end){
    if (end <= start) return;

    int pivot = partition(data, start, end);

    quick(data, start, pivot-1);
    quick(data, pivot+1, end);
}

int main(){
    FILE *f = fopen("testdata.in", "r");

    int count = 0;
    while(!feof(f)){
        fscanf(f, "%[^#]#%lf#%c\n", data[count].nama, &data[count].suhu, &data[count].opt);
        if (data[count].opt == 'F'){
            data[count].temp = (data[count].suhu - 32) * 5 / 9;
        }else data[count].temp = data[count].suhu;
        count++;
    }

    quick(data, 0, count-1);
    for (int i = 0 ; i < count ; i++){
        printf("%s is %.2lf%c\n", data[i].nama, data[i].suhu, data[i].opt);
    }
    return 0;
}