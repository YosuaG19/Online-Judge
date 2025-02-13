#include<stdio.h>

int main (){
    int tcase;
    scanf("%d", &tcase);
    int ada;
    for (int i = 1 ; i <= tcase ; i++){
		scanf("%d", &ada);
		if (ada) {
			printf("not easy\n");
			break;	
		}
	}
	if (!ada) printf("easy\n");
	return 0;
}
