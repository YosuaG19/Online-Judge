#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct nama{
    int rank;
    char name[15];
    char place[15];
}data[100005];

void swap(nama *a, nama *b){
    nama temp = *a; 
    *a = *b;
    *b = temp;
}

int partition(nama *data, int start, int end){
    int i = start-1, r = (rand() % (end - start)) + start;
    swap(&data[r], &data[end]);

    for (int j = start ; j < end ; j++){
        if (data[j].rank > data[end].rank || (data[j].rank == data[end].rank && strcmp(data[j].name, data[end].name) < 0)){
            i++;
            swap(&data[i], &data[j]);
        }
    }
    i++;
    swap(&data[i], &data[end]);

    return i;
}

void quick(nama *data, int start, int end){
    if (end <= start) return;

    int pivot = partition(data, start, end);

    quick(data, start, pivot-1);
    quick(data, pivot +1, end);
}

int main(){
    int tcase;
    long long total = 0;
    scanf("%d", &tcase);
    for (int i = 0 ; i < tcase ; i++){
        scanf("%d %s", &data[i].rank, data[i].name);getchar();
        total += data[i].rank;
        if (data[i].rank >= 351) strcpy(data[i].place, "Radial");
        else if (data[i].rank >= 201) strcpy(data[i].place, "Mortal");
        else strcpy(data[i].place, "Ascend");
    }

    quick(data, 0, tcase-1);
    
    int mean = total/tcase;
    for (int i = 0 ; i < tcase ; i++){
        printf("%s %d %d %s\n", data[i].place, data[i].rank, data[i].rank-mean , data[i].name);
    }
    
    return 0;
}