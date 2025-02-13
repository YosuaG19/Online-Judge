#include<stdio.h>
#include<string.h>

int main(){
	int tcase;
	FILE *f = fopen("testdata.in", "r");
	fscanf(f, "%d", &tcase);fgetc(f);
	for (int i = 1 ; i <= tcase ; i++){
		char base[105] = {};
		int total[27] = {};
		bool flag[27];
		for (int j = 0 ; j < 26 ; j++){
			flag[j] = false;
		}
		fscanf(f, "%s", &base);fgetc(f);
		int ttl_search;
		int l = strlen(base);
		fscanf(f, "%d", &ttl_search);fgetc(f);
		for (int j = 0 ; j < ttl_search ; j++){
			char search, switcher;
			fscanf(f, "%c %c", &search, &switcher);fgetc(f);
			for (int k = 0 ; k < l ; k++){
				if (!flag[search-'A'] && base[k] == search){
					base[k] = switcher;
//					count ++;
				}
//				printf("%s\n", base);
			}
//			total[switcher-'A'] = count;
//			printf("%c %d %d\n", switcher, switcher-'A', total[switcher-'A']);
			flag[search-'A'] = true;
		}
		for (int k = 0 ; k < l ; k++){
			total[base[k]-'A'] ++;
		}
		
		for (int j = 0 ; j < 26 ; j++){
			if (total[j] > 0) printf("%c %d\n", j+'A', total[j]);
		}
	}
}

