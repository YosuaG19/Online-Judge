#include<stdio.h>

int k = 0;

void knight(int a, int b, int x, int y, int move, int count){
    if (a > 8 || a < 1 || b > 8 || b < 1 || k) return;
    if (a == x && b == y) {
        k = 1;
        return ;
    }
    if(count == move) return;
    // else move --;
    knight(a+1, b+2, x, y, move, count+1); 
    knight(a+2, b+1, x, y, move, count+1);
    knight(a-1, b+2, x, y, move, count+1); 
    knight(a+1, b-2, x, y, move, count+1);
    knight(a-1, b-2, x, y, move, count+1);    
    knight(a-2, b+1, x, y, move, count+1); 
    knight(a+2, b-1, x, y, move, count+1);
    knight(a-2, b-1, x, y, move, count+1);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for ( int i = 1 ; i <= tcase ; i++){
        int move;
        char i1[3], i2[3];
        scanf("%d", &move);getchar();
        scanf("%s %s", i1, i2);
        int xWhite = i1[0]-'A' + 1;
        int yWhite = i1[1]-'0';
        int xBlack = i2[0]-'A' + 1;
        int yBlack = i2[1]-'0';
        move *= 2;
        // , a = i1 - 'A', x = i2 - 'A', b --, y --;
        k = 0;
        knight(xBlack, yBlack, xWhite, yWhite, move, 0);
        printf("Case #%d: %s\n", i ,  k? "YES" : "NO");
    }
    return 0;
}
// 2
// 3
// A1 H8