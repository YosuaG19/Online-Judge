#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct data{
    int nilai;
    char nama[260];
    int index;
}arr[15005];

int binary(data arr[], int n, char search[]){
    int l = 0 , h = n-1, m;
    while (l<= h){
        m = (l+h)/2;

        if (strcmp(arr[m].nama, search) == 0){
            return arr[m].index;
        }else{
            if (strcmp(arr[m].nama, search) < 0){
                h = m-1;
            }else{
                l = m+1;
            }
        }
    }

    return -1;
}


int main(){
    int n;
    scanf("%d", &n);getchar();

    for (int i = 0 ; i < n ; i++){
        scanf("%s %d", arr[i].nama, arr[i].nilai);getchar();
        arr[i].index = i;
    }

    int p;
    for (int i = 0 ; i < p ; i++){
        char s1[260], s2[260];
        scanf("%s %s", s1, s2);getchar();
        int a = binary(arr, n, s1), b = binary(arr, n, s2);
        if (a > -1 && b > -1 && a != b){
            int result = arr[a].nilai - arr[b].nilai, depth = a-b;
            result > 0 ? result : result*=-1;
            depth > 0 ? depth : depth*=-1;

            printf("%d %d\n", result, depth);
        }else if (a == b){
            printf("not valid\n");
        }else{
            printf("not found\n");
        }

    }

}