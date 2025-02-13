#include <stdio.h>
long long high, low;

long long binary(long long target){
    low = 1;
    high = 2000000;
    while(low < high){
        long long mid = low+(high-low)/2;
        long long num = mid*(mid+1)*(2*mid+1)/6;
        if(num >= target) high = mid;
        else low = mid+1;
    }
    return high;
}

int main(){
    long long N;
    int T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%lld", &N);
        long long counter = binary(N);
        printf("Case #%d: %lld\n", i, counter);
    }
    return 0;
}