#include<stdio.h>

void tree(int arr[], int start, int n, int sum){
	sum += arr[start];
	if ((start * 2 > n) && (start*2+1 > n)) printf("%d\n", sum);
	if (start * 2 <= n) tree(arr, start * 2, n, sum);
	if (start * 2 + 1 <= n) tree(arr, start * 2 + 1, n, sum);
}


int main(){
	int tcase; 
	scanf("%d", &tcase);
	for (int i = 1; i <= tcase ; i++){
		int ttl;
		scanf("%d", &ttl);
		int arr[ttl+2] = {};
		for (int j = 1 ; j <= ttl ; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d:\n", i);
		tree(arr, 1, ttl, 0);
	}
	
    return 0;
}
