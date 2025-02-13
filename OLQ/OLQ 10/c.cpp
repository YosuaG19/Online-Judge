#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i = 0 ; i < n ; i++){
        if (i == 0) arr[i] = 0;
        else if (i == 1 || i == 2) arr[i] = 1;
        else if (i % 3 == 0) arr[i] = 10;
        else arr[i] = arr[i-1] + arr[i-2];
    }

    for (int i = 0 ; i < n ; i++){
        if (i != n-1) printf("%d ", arr[i]);
        else printf("%d\n", arr[i]);
    }
    return 0;
}