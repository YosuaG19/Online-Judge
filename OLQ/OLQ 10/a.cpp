#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct nama{
    int index;
    char nama[25];
}data[101];

int linear_search(nama *data, char search[], int n){
    for (int i = 0 ; i < n ; i++){
        if (strcmp(data[i].nama, search) == 0) return data[i].index;
    }
    return -1;
}

int main(){
    FILE *f = fopen("testdata.in", "r");

    int n;
    fscanf(f, "%d\n", &n);
    for (int i = 0 ; i < n ; i++){
        fscanf(f, "%s\n", data[i].nama);
        data[i].index = i;
    }

    int q;
    fscanf(f, "%d", &q);
    for (int i = 0 ; i < q ; i++){
        char search[25] = {};
        fscanf(f, "%s\n", search);
        printf("%d\n", linear_search(data, search, n));
    }
    return 0;
}