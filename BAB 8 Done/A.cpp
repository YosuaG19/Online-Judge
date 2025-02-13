#include<stdio.h>
#include<string.h>

struct kata{
    char code[55];
    char mean[55];
}kata[101];



int main (){
    FILE *f = fopen("testdata.in", "r");
    int data;
    fscanf(f, "%d", &data);fgetc(f);
    for (int i = 0 ; i < data ; i++){
        fscanf(f, "%[^#]#%s", kata[i].code, kata[i].mean);fgetc(f);
    }
//    for (int i = 0 ; i < data ; i++){
//        printf("%s#%s\n", kata[i].code, kata[i].mean);
//    }
    int tcase; 
    fscanf(f, "%d", &tcase);fgetc(f);
    
    for (int i = 1 ; i <= tcase ; i++){
    	char search [105] = {};
    	fscanf(f, "%[^\n]", search);fgetc(f);
    	printf("Case #%d:\n", i);
    	int l = strlen(search), end = 0;
    	char *portion = strtok(search, " "), d[1] = {' '};
    	
    	while (portion != NULL){
    		int j = 0, ada = 0;;
    		for (; j < data ; j++){
    			if (strcmp(portion, kata[j].code) == 0){
    				ada = 1;
    				break;
				}
			}
			end += strlen(portion) + 1;
			if (end > l){
				if (ada) printf("%s\n", kata[j].mean);
				else printf("%s\n", portion);
			}
			else {
				if (ada) printf("%s ", kata[j].mean);
				else printf("%s ", portion);
			}	
			portion = strtok(NULL, " ");
		}
	}
    
}
