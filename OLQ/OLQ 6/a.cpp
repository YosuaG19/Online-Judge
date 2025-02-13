#include<stdio.h>
#include<string.h>

long long int tree(int m, int n){
    if (m == 0) return 0;
    return m + (n-1) + (n-1) * tree(m-1, n-1) % 100000000ll; 
}

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
        int m, n;
        scanf("%d %d", &m, &n);
        printf("Case #%d: %d\n", i, tree(m,n));
    }
    
    return 0;
}