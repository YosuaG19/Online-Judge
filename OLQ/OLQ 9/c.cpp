#include<stdio.h>
#include<string.h>

struct a{
    char nama[30];
}data[10005];

int main(){
    int n;
    scanf("%d", &n);getchar();
    for (int i = 0 ; i < n ; i++){
        scanf("%s", data[i].nama);getchar();
    }
    int found = 0;
    char search[30];
    scanf("%s", search);
    for (int i = 0 ; i < n ; i++){
        if (strcmp(data[i].nama, search) == 0){
            found = 1;
            break;
        }
    }

    if (found) printf("Found\n");
    else printf("Not Found\n");
    return 0;
}