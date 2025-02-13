#include<stdio.h>

void read(){
    long long a = 101;
    FILE *f = fopen("testdata.in", "r");
    char b[4] = {};
    int c = 0;
    while (!feof(f)){
        fscanf(f, "%[^;];", &b);
        if (b == ""){
            c++;
        } 
    }
    for (int i = 0 ; i < c-1 ; i++){
        a *= a;
    }
    printf("%lld\n", &a);
}

int main(){
    read();
    return 0;
}