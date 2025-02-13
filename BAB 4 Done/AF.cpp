#include<stdio.h>

int main(){
    long long int tcase, N;
    scanf("%lld", &tcase);
    for (int i = 1 ; i <= tcase ; i++)
    {
        scanf("%lld", &N);
        long long int Input[N+1], count = 0, ttl_sum = 0;
        long long int ttl1 = 0, ttl2 = 0;
        for (int j  = 0 ; j < N ; j++)
        {
            scanf("%lld", &Input[j]);
            ttl_sum += j;
        }

        int sum[ttl_sum];
        for (int j = 0 ; j < N ; j++){
            for (int k = 1 + j ; k < N ; k++, count++){
                sum[count] = Input[j] ^ Input[k];
            }
        }

        int counter;
        count = 0;
        for (int j = 0; j < ttl_sum ; j++, count++){
            counter = 0;
            for (; sum[count] > 0;){
                if (sum[count] > 0 && (sum[count] & 1) == 1){
                    counter ++;
                }
                sum[count] >>= 1;
            }
            if (counter >= 3) {
                ttl1 ++;
            }else if (counter < 3){
                ttl2 ++;
            }
        }
        printf("Case #%d: %lld %lld\n", i, ttl1 , ttl2);
    }
}