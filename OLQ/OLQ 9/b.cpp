#include<stdio.h>
#include<string.h>

struct word{
    char nama[105];
}data[100];

int search(word *data, int start, int end, char find[]){
    int index = -1;
    while (start <= end){
        int mid = (end + start)/2;
        if (strcmp(data[mid].nama, find) == 0){
            index = mid +1;
            return index;
        }
        if (strcmp(data[mid].nama, find) > 0){
            end = mid - 1;
        }
        else if (strcmp(data[mid].nama, find) < 0){
            start = mid + 1;
        }
    }

    return index;
}

int main(){
    int n, mod;
    scanf("%d %d", &n, &mod);getchar();
    for (int i = 0 ; i < n ; i++){
        scanf("%s", data[i].nama);getchar();
    }

    // for (int i = 0 ; i < n ; i++){
    //     // printf("%s\n", data[i].nama);
    // }

    char find[105];
    scanf("%s", find);
    
    int index = search(data, 0, n-1, find), count = 0;

    while (index > 0){
        index -= mod;
        count++;
    }
    printf("%d\n", count);

    return 0;
}