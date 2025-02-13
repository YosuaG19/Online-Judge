#include<stdio.h>

int move;
void knight(int a, int b, int x, int y, int count){
    if (count > move || a > 8 || a < 1 || b > 8 || b < 1) return;
    if (a == x && b == y) {
        if(count < move) move = count;
        return;
    }

    knight(a+1, b+2, x, y, count+1); 
    knight(a+2, b+1, x, y, count+1);
    knight(a-1, b+2, x, y, count+1); 
    knight(a+1, b-2, x, y, count+1);
    knight(a-1, b-2, x, y, count+1);    
    knight(a-2, b+1, x, y, count+1); 
    knight(a+2, b-1, x, y, count+1);
    knight(a-2, b-1, x, y, count+1);
}

int main (){
    int tcase;
    scanf("%d", &tcase);getchar();
    for ( int i = 1 ; i <= tcase ; i++){
        char i1[3], i2[3];
        scanf("%s %s", i1, i2);
        move = 6;
        int xWhite = i1[0]-'A' + 1;
        int yWhite = i1[1]-'0';
        int xBlack = i2[0]-'A' + 1;
        int yBlack = i2[1]-'0';
        // , a = i1 - 'A', x = i2 - 'A', b --, y --;
        knight(xBlack, yBlack, xWhite, yWhite, 0);
        printf("Case #%d: %d\n", i ,  move);
    }
    return 0;
}
// 2
// 3
// A1 H8