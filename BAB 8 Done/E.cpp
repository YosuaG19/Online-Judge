#include<stdio.h>


int partition(int arr[], int start, int end){
	int pivot = arr[end];
	int i = start - 1;
	for (int j = start ; j < end ; j++){
//		if (arr[j] > pivot){    //besar ke kecil
		if (arr[j] < pivot){    //kecil ke besar
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	i++;
	int temp = arr[i];
	arr[i] = arr[end];
	arr[end] = temp;
	
	return i;
}

void quick(int arr[], int start, int end){
	if (end <= start) return;
	
	int pivot = partition(arr, start, end);
	
	quick(arr, start, pivot-1);
	quick(arr, pivot+1, end);
	
}


int main(){
	int tcase;
	scanf("%d", &tcase);
	for (int i = 1 ; i <= tcase ; i++){
		int ttl, search;
		scanf("%d", &ttl);
		int mmr[ttl];
		for (int j = 0 ; j < ttl ; j++){
			scanf("%d", &mmr[j]);
		}
		quick(mmr, 0, ttl-1);
		
		scanf("%d", &search);
		
		int ada = 0;
		printf("CASE #%d: ", i);
		for (int j = 0 ; j < ttl ; j++){
			if (mmr[j] == search){
				ada = 1;
				if (j == ttl - 1) printf("%d %d\n", mmr[j-1], search);
				else printf("%d %d\n", search, mmr[j+1]);
				break;
			}
		}
		if (!ada) printf("%d %d\n", -1, -1);
	}
	return 0;
}
