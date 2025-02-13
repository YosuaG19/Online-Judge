#include <stdio.h>

void sort(int arr[], int l){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int ncase;
    scanf("%d", &ncase);
    for(int n = 1; n <= ncase; n++){

        int nfriend;
        scanf("%d", &nfriend);
        int list[nfriend+1];
        for(int i = 0; i < nfriend; i++){
            scanf("%d", &list[i]);
        }
        sort(list, nfriend);
        // for(int i = 0; i < nfriend; i++){
        //     printf("%d ", list[i]);
        // } puts("");
        
        int min1 = 0, min2 = 0;
        for(int i = 1; i < nfriend/2; i++){
            if(min1 < list[i] - list[i-1]) min1 = list[i] - list[i-1];
        }
        for(int i = nfriend/2+1; i < nfriend; i++){
            if(min2 < list[i] - list[i-1]) min2 = list[i] - list[i-1];
        }
        printf("Case #%d: %d\n", n, min1 > min2 ? min1 : min2);
    }

    return 0;
}