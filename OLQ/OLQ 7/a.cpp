#include<stdio.h>



void read(){
    int a = 0;
    FILE *f = fopen("testdata.in", "r");
    fscanf(f, "%d", &a);fgetc(f);
    long long int arr[a+1] = {}, flg = 0;
    for (int i = 0 ; i < a ; i++){
        fscanf(f, "%lld", &arr[i]);
        // printf("%d ", arr[i]);
    }
    for (int i = 0; i < a ; i++){
        for (int j = 0 ; j < a-1 ; j++){
            if (i == j) j++;
            if (arr[i] >(arr[j] + arr[j+1])) flg = 1;
            if (flg) break;
        }
        if (flg) break;
    }
    if (flg){
        printf("YES\n");
        return;
    }
    printf("NO\n");
}

int main(){
    read();
    return 0;
}