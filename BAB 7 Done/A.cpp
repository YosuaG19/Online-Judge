#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b; 
	*b = temp;
}

int partition(int arr[], int start, int end){
	int i = start-1, r = (rand()%(end -start)) + start;
	swap(&arr[r], &arr[end]);

	for (int j = start ; j < end ; j++){
		if (arr[j] < arr[end]){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	i++;
	swap(&arr[i], &arr[end]);

	return i;
}

void quick(int arr[], int start, int end) {
	if (end <= start) return;

	int pivot = partition(arr, start, end);

	quick(arr, start, pivot-1);
	quick(arr, pivot+1, end);
}


int main(){
	int n;
	scanf("%d", &n);
	int nilai[n+1], selisih[n];
	for (int i = 0 ; i < n ; i++){
		scanf("%d", &nilai[i]);
	}

	quick(nilai, 0, n-1);

	int temp = 0;
	for (int i = 1, j = 0 ; i < n ; i++, j++){
		selisih[j] = nilai[i] - nilai[i-1];
		if (temp < selisih[j]) temp = selisih[j];
	}

	int arr[n] = {}, count = -1;
	for (int i =  0 ; i < n ; i++){
		if (temp == selisih[i]){
			count++;
			arr[count] = nilai[i];
			count++;
			arr[count] = nilai[i+1];
		}
	}

	for (int i = 0 ; i <= count ; i++){
		if (i != count) printf("%d ", arr[i]);
		else printf("%d\n", arr[i]);
	}


	return 0;
}