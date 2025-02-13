#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct siswa{
    int nilai;
    char nama[55];
}data[55];

void swap(siswa *a, siswa *b){
    siswa temp = *a;
    *a = *b;
    *b = temp;
}

int partition(siswa *data, int start, int end){
    int i = start-1, r = (rand()%(end-start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (data[j].nilai > data[end].nilai || (data[j].nilai == data[end].nilai && strcmp(data[j].nama, data[end].nama) < 0)){
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
    for (int j = 0 ; j < n ; j++){
        printf("%s - %d\n", data[j].nama, data[j].nilai);
    }
}

int main(){
    int tcase;
    scanf("%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int n; 
        scanf("%d", &n);getchar();
        for (int j = 0 ; j < n ; j++){
            scanf("%[^#]#%d", &data[j].nama, &data[j].nilai);getchar();
        }
        quick(data, 0, n-1);
        printf("Case #%d:\n", i);
        display(data, n);
    }
    
    return 0;
}