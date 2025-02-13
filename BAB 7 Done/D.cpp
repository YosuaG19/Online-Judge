#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct youtuber{
    int view;
    char title[1005], nama[1005];
}data[105];

void swap(youtuber *a, youtuber *b){
    youtuber temp = *a;
    *a = *b;
    *b = temp;
}

int partition(youtuber *data, int start, int end){
    int i = start-1, r = (rand() % (end - start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (data[j].view > data[end].view || (data[j].view == data[end].view && strcmp(data[j].title, data[end].title) < 0)){
            i++;
            swap(&data[i], &data[j]);
        }
    }
    i++;
    swap(&data[i], &data[end]);

    return i;
}

void quick(youtuber *data, int start, int end){
    if (end <= start) return;

    int pivot = partition(data, start, end);

    quick(data, start, pivot-1);
    quick(data, pivot+1, end);
}

void display(youtuber *data, int n){
    for (int i =  0 ; i < n ; i++){
        printf("%s by %s - %d\n", data[i].title, data[i].nama, data[i].view);
    }
}

int main (){
    FILE *f = fopen("testdata.in", "r");
    int n, i = 0;
    while (!feof(f)){
        fscanf(f, "%[^#]#%[^#]#%d\n", data[i].title, data[i].nama, &data[i].view);
        // fscanf(f, "%[^#]#%[^#]#%d", data[i].title, data[i].nama, &data[i].view);fgetc(f);
        // printf("%s # %s # %d\n", data[i].title, data[i].nama, data[i].view);
        i++;
    }
    // puts("");
    quick(data, 0, i-1);
    display(data, i);

    return 0;
}