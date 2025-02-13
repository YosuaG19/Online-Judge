#include<stdio.h>
#include<string.h>

struct mahasiswa{
	char nim[11], nama[25];
}mh[101];

int main (){
    FILE *f = fopen("testdata.in", "r");
    int ttl;
    fscanf(f, "%d", &ttl);fgetc(f);
    for (int i = 0 ; i < ttl ; i++){
    	fscanf(f, "%[^ ] %s", mh[i].nim, mh[i].nama);fgetc(f);
	}

//	for (int i = 0 ; i < ttl ; i++){
//		printf("%s %s\n", mh[i].nim, mh[i].nama);
//	}
	
	int tcase; 
	fscanf(f, "%d", &tcase);fgetc(f);
	for (int i = 1 ; i <= tcase ; i++){
		int ada = 0, j;
		char search[11] = {};
		fscanf(f, "%s", search);
		printf("Case #%d: ", i);
		for (j = 0 ; j < ttl ; j++){
			ada = strcmp(search, mh[j].nim) == 0 ? 1 : 0;
			if (ada) break;
		}
		if (ada) printf("%s\n", mh[j].nama);
		else printf("N/A\n");
	}

}
