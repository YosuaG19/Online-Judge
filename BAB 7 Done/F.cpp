#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
    int nilai;
    char nama[11];
}dt[100];

void swap(data *a, data *b){
    data temp  = *a;
    *a = *b;
    *b = temp;
}

int partition(data *dt, int start, int end){
    int i = start - 1, r = (rand() % (end - start)) + start;
    swap(&dt[r], &dt[end]);

    for (int j = start ; j < end ; j++){
        if (dt[j].nilai < dt[end].nilai || (dt[j].nilai == dt[end].nilai && strcmp(dt[j].nama, dt[end].nama) < 0)){ //|| dt[j].nilai == dt[end].nilai && strcmp(dt[j].nama, dt[end].nama) < 0
            i++;
            swap(&dt[i], &dt[j]);
        }
    }
    i++;
    swap(&dt[i], &dt[end]);
    return i;
}

void quick(data *dt, int start, int end){
    if (end <= start) return;

    int pivot = partition(dt, start, end);

    quick(dt, start, pivot - 1);
    quick(dt, pivot + 1, end);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 0 ; i < tcase ; i++){
        scanf("%s %d", dt[i].nama, &dt[i].nilai);getchar();
    }
    quick(dt, 0, tcase-1);
    for (int i = 0 ; i < tcase ; i++){
        printf("%s\n", dt[i].nama);
    }

    return 0;
}