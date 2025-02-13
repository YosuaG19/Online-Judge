#include<stdio.h>
#include<string.h>



/*
3
5 5
##### 
#S..# 
###.# 
#...# 
#####
2 2
S.
.#


2 
5 5
##### 
#S..# 
##### 
#...# 
#####
2 2
S.
.#


2 
5 5
##### 
#S..# 
###.# 
#...# 
#####
2 2
S.
.#
*/
int floodfill(char field[105][105], int x, int y, int n , int m){
    int count = 0;
    if (x < 0 || y < 0 || x >= m || y >= n) return 0; //keluar boundary
    if (field[y][x] == '#') return 0; //ketemu pager
    if (field[y][x] == '.') count+=1;
    field[y][x] = '#';
    count += floodfill(field, x-1, y, n, m); //kiri
    count += floodfill(field, x+1, y, n, m); //kanan
    count += floodfill(field, x, y-1, n, m); //bawah
    count += floodfill(field, x, y+1, n, m); //atas
    return count;
}


int main (){
    int tc;
    scanf("%d", &tc);
    for (int i = 1 ; i <= tc ; i++){
        int n, m;
        scanf("%d %d", &n, &m);getchar();
        char field[105][105]={};
        for (int j = 0 ; j < n ; j++){
            scanf("%s", field[j]);getchar();
        }
        int x = -1, y = -1, count = 0;
        for (int j = 0 ; j < n ; j++){
            for (int k = 0 ; k < m ; k++){
                if (field[j][k] == 'S'){
                    x = k, y = j;
                    count += floodfill(field, x, y, n, m);
                }
            }
        }
        printf("Case #%d: %d\n", i, count);
    }
    return 0;
}