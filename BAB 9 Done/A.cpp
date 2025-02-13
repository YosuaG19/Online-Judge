#include<stdio.h>
#include<string.h>

struct nama{
	char n[45], m[45];
}nama[100];

int main(){
	FILE *f = fopen("testdata.in", "r");
	int ttl;
	fscanf(f, "%d", &ttl);fgetc(f);
	for (int i = 0 ; i < ttl ; i++){
		fscanf(f, "%[^#]#%[^\n]", nama[i].n, nama[i].m);fgetc(f);
	}
	
	int tcase;
	fscanf(f, "%d", &tcase);
	for (int i = 1; i <= tcase ; i++){
		int ada = 0, j = 0;
		char search[45] = {};
		fscanf(f, "%s", search);
		for (; j < ttl ; j++){
			if (strcmp(search, nama[j].n) == 0){
				ada = 1;
				break;
			}
		}
		printf("Case #%d: ", i);
		if (ada) printf("%s\n", nama[j].m);
		else printf("N/A\n");
	}
}
