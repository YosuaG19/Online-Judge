#include<stdio.h>

void swap(long long *a, long long *b){
	long long temp = *a;
	*a = *b;
	*b = temp;
}

long long partition(long long *arr, long long low, long long high){
	long long pivot = arr[high];
	long long i = (low-1);
	for(long long j = low; j < high; j++){
		if(arr[j] < pivot){
			i++; swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

void quick(long long *arr, long long low, long long high){
	if(low < high){
		int partitionIndex = partition(arr, low, high);
		quick(arr, low, partitionIndex-1);
		quick(arr, partitionIndex+1, high);
	}
}


int main (){
    long long tcase;
    scanf("%lld", &tcase);
    long long arr[tcase+1], power, count = 0;
    for (long long i = 0 ; i < tcase ; i++){
    	scanf("%lld", &arr[i]);
	}
	scanf("%lld", &power);
	
	quick(arr, 0, tcase-1);
	
	for (long long i = 0 ; i < tcase ; i++){
		if (power >= arr[i]){
			power -= arr[i];
			count++; continue;
		}
		break;
	}
	
	printf("%lld\n", count);
	return 0;
}
