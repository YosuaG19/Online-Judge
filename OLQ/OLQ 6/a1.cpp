#include<stdio.h>
#include<string.h>
#define ll long long

ll memo[1001];

ll f(ll m, ll n){
    if (m == 0) return 1;
    if (memo[m] != -1) return memo[m];
    ll sum = 1;
    // sum += (n-1) * f(m-1,n-1); //alternatif
    
    for (int i = 0 ; i < n-1 ; i++){
        sum += f(m-1, n-1);
    }

    sum += m;
    memo[m] = sum % 1000000000;
    return memo[m]; 
}

int main(){
    for (int i = 0 ; i < 1001 ; i++) memo[i] = -1;
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        ll m, n;
        scanf("%lld %lld", &m, &n);
        printf("Case #%d: %lld\n", i, f(m,n) - 1);
    }
    
    return 0;
}