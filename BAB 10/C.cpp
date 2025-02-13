#include<stdio.h>

long long binary(long long search, long long arrt[], int n){
    long long low = 0, high = n-1, mid, idx=0; 
    while (low <= high){
        mid = low + (high -low)/2;
        if (arrt[mid] == search) {
            return mid + 1;
        }
        else {
            if (arrt[mid] > search) high = mid-1; 
            else low = mid + 1;
        }
        if(arrt[mid]==search) return mid+1; 
        else if(arrt[mid]>search){
            idx=mid;  
            high=mid-1;  
        }
        else low=mid+1; 
    }
    // if ((search - arrt[low -1] < arrt[low] - search)){
    //     return low;
    // }
    return idx;
    // return low + 1;
}

int main(){
    int n, m;
    scanf("%d", &n);
    long long arr[n+1] = {}, arrt[n] = {}, total = 0;
    for (int i = 0, j = 0 ; i < n ; i++){
        scanf("%lld", &arr[i]);
        total += arr[i];
        if (i != 0) {
            arrt[j] = arr[i] + arrt[j-1];
            j++;
        }else {
            arrt[j] = arr[i];
            j++;
        }
    }

    // for (int i = 0 ; i < n ; i++){
    //     printf("%lld\n", arrt[i]);
    // }
    scanf("%d", &m);
    for (int i = 1 ; i <= m ; i++){
        long long search;
        scanf("%lld", &search);
        printf("Case #%d: ", i); 
        if (search >= total) printf("%d\n", n);
        else if(search<=arrt[0]) printf("-1\n"); 
        else printf("%lld\n", binary(search, arrt, n));
    }
}