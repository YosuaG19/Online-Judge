#include<stdio.h>

long long search(long long target){
    long long low = 1, mid, high = 2000000;
    while (low < high){
        mid = low + (high-low)/2;
        long long num = mid*(mid+1)*(2*mid+1)/6;
        if (num >= target) high = mid;
        else low = mid+1;
    }
    return high;
}

int main (){
    int tcase;
    long long a;

    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        scanf("%lld", &a);
        // long long num = search(a);
        printf("Case #%d: %lld\n", i, search(a));    
    }
}

