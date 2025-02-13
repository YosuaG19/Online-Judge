#include<stdio.h>

int main (){
    int ttl, del;
    scanf("%d %d", &ttl, &del);
    int arr[105], search;
    
	for (int i = 0 ; i < ttl ; i++){
    	scanf("%d", &arr[i]);
	}
	
	for (int i = 0 ; i < del ; i++){
		scanf("%d", &search);
		for (int j = 0 ; j < ttl ; j++){
			if (arr[j] == search) arr[j] = 0;
		}
	}
	
	int max = 0;
	// int max = 0, count = 0, ada = 0;
	
	// for (int i = 0 ; i < ttl ; i++){
	// 	if (arr[i] > 0){
	// 		max += arr[i];
	// 		count++;
	// 	}
	// }
	
	// max /= count;
	
	for (int i = 0 ; i < ttl ; i++){
		if (arr[i] > max) max = arr[i];
	}
	if (max > 0) printf("Maximum number is %d\n", max);
	else {
		printf("Maximum number is %d\n", -1);	
	}
	
}
