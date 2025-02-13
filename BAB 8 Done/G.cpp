#include<stdio.h>

int main (){
	int tcase;
	scanf("%d", &tcase);
	for (int i = 1 ; i <= tcase ; i++){
		int ttl, search, count = 0;
		scanf("%d %d", &ttl , &search);
		for (int j = 0 ; j < ttl ; j++){
			int a;
			scanf("%d", &a);
			if (a >= search) count++;
		}
		printf("Case #%d: %d\n", i, count);
	}
}
