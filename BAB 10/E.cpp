#include<stdio.h>
#include<stdlib.h>

#define ll long long

int max(ll arr[], ll search, ll total, int n){
    int l = 0 , r = n-1;
    while (total != search){
        if (total - arr[r] > total) {
            total - arr[r];
            printf("\ntotal : %lld - arr[r] : %lld", total, arr[r]);
            r--;
        }
        else {
            total - arr[l];
            printf("\ntotal : %lld - arr[i] : %lld", total, arr[l]);
            l++;
        }
        printf("%lld\n\n", total);
    }
    return n-l-r;
}

int main(){
    int n;
    scanf("%d", &n);
    
    ll arr[n+1] = {}, total = 0;
    for (int i = 0 ; i < n ; i++){
        scanf("%lld", &arr[i]);
        total += arr[i];
    }

    int m;
    scanf("%d", &m);
    for (int i = 0 ; i < m ; i++){
        ll search;
        scanf("%lld", &search);
        printf("Case #%d: %d\n", max(arr, search, total, n));
    }

    return 0;
}