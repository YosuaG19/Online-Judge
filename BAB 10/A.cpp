#include<stdio.h>

int binary(int arr[], int n, int search){
    int start = 0, end = n-1, m;

    while (start <= end){
        m = (start + end)/2;
        if (arr[m] == search){
            for (int i = start ; i <= m ; i++){
                if (arr[i] == search) return i+1;
            }
        }
        else {
            if (arr[m] > search) end = m-1;
            else start = m+1;
        }
    }
    return -1;
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n+1] = {};
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0 ; i < m ; i++){
        int search;
        scanf("%d", &search);
        printf("%d\n",  binary(arr, n, search));
    }

    return 0;
}