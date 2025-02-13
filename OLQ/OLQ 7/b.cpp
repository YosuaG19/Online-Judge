#include<stdio.h>

void write(){
    FILE *f = fopen("testdata.in", "r");
    int a;
    fscanf(f, "%d", &a);fgetc(f);
    char string[a+1] = {};
    fscanf(f, "%s", string);

    int count = 0, temp = 0;
    for (int i = 0 ; i <= a ; i++){
        if (string[i] == '1'){
            count ++;
        }
        else {
            if (temp < count) temp = count;
            count = 0;
        }
    }
    printf("%d\n", temp);
}

int main(){
    write();
    return 0;
}
