#include<stdio.h>

int main (){
    char name1[105], name2[105];
    int umur1, umur2;
    double tinggi1, tinggi2;
    scanf("%s %lf %d %s %lf %d", name1, &tinggi1, &umur1, name2, &tinggi2, &umur2);
    printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\n", name1, tinggi1, umur1);
    printf("Name 2: %s\nHeight 2: %.2lf\nAge 2: %d\n", name2, tinggi2, umur2);
    return 0;
}