#include<stdio.h>

int main(){
    int tcase; 
    FILE *f = fopen ("testdata.in", "r");
    fscanf(f, "%d", &tcase);

    for (int i = 1 ; i <= tcase ; i++){
        int n, sum = 0;
        fscanf(f, "%d", &n);
        int arr[n][101] = {}, input[n];
        for (int j = 0 ; j < n ; j++){
            fscanf(f, "%d", &input[j]);
            sum += input[j];
        }

        int area = sum * 4;
        int peri = 0;

        for (int j = 0 ; j < n ; j++){
            if (input[j] > 0) {
                // printf("Peri %d\n", j+1);
                peri += 4; //kanan atas bawah dari grafik
                peri += input[j] * 4;
                // printf("%d\n", peri);
                if (j > 0 && input[j - 1] > 0) peri -= 2 * (input[j] > input[j-1] ? input[j-1] : input[j]);
                if (j < n-1 && input[j + 1] > 0) peri -= 2 * (input[j] > input[j+1] ? input[j+1] : input[j]);
                // printf("%d\n", peri);
            }
        }
        // printf("%d\n", peri);

        printf("Case #%d: %d %d\n", i, peri, area);
    }

    return 0;
}