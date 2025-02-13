#include<stdio.h>
#include<string.h>

struct mahasiswa{
	int nilai;
	char nama[15];
}data[1005];

int partition(mahasiswa *data, int start, int end){
	int pivot = data[end].nilai;

	int i = start - 1;
	for (int j = start ; j < end ; j++){
		if (data[j].nilai > pivot || (data[j].nilai == pivot && strcmp( data[end].nama, data[j].nama) > 0)){
			i++;
			mahasiswa temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	i++;
	mahasiswa temp = data[i];
	data[i] = data[end];
	data[end] = temp;
	
	return i;
}

void quick(mahasiswa *data, int start, int end){
	if (end <= start) return;

	int pivot = partition(data, start, end);

	quick(data, start, pivot - 1);
	quick(data, pivot + 1, end);
}

int main (){
    int tcase;
    scanf("%d", &tcase);
    for (int i = 1 ; i <= tcase ; i++){
    	int ttl;
    	scanf("%d", &ttl);getchar();
    	for (int j = 0 ; j < ttl ; j++){
    		scanf("%[^#]#%d", data[j].nama, &data[j].nilai);getchar();
		}
		
		char search[15] = {};
		scanf("%s", search);getchar();
		
		printf("Case #%d: ", i);
		quick(data, 0, ttl-1);
		for (int j = 0 ; j < ttl ; j++){
			if (strcmp(data[j].nama, search) == 0){
				printf("%d\n", j+1);
				break;
			}
		}
	}
}
