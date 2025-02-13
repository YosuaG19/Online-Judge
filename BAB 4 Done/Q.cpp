#include<stdio.h>

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++)
    {
        long long int ttl, num, pages, half;
        scanf("%lld %lld", &ttl , &num);
        half = ttl / 2;
        if (num == half || num == half+1) pages = half/2;
        if (num < half) pages = num/2;
        if (ttl % 2 == 0)
        {
            if (num == ttl || num == 1) pages = 0;
            if (num > half) pages = (ttl+1 - num)/2; 
        }
        else if (ttl %2 != 0)
        {
            if (num == ttl || num == ttl - 1 || num == 1) pages = 0;
            if (num > half) pages = (ttl - num)/2; 
        }
        printf("Case #%d: %lld\n", i, pages);
    }
}