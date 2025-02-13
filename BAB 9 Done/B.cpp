#include<stdio.h>
#include<string.h>

int main (){
	FILE *f = fopen("testdata.in", "r");
	int tcase;
	fscanf(f, "%d", &tcase);fgetc(f);
	for (int i = 1 ; i <= tcase ; i++){
		int k;
		char string[1005];
		fscanf(f, "%d", &k);fgetc(f);
		fscanf(f, "%[^\n]", string);fgetc(f);
		int l = strlen(string);
		for (int j = 0 ; j < l ; j++){
			switch (string[j]){
				case '0':
					string[j] = 'O';
					break;
				case '1':
					string[j] = 'I';
					break;
				case '3':
					string[j] = 'E';
					break;
				case '4':
					string[j] = 'A';
					break;
				case '5':
					string[j] = 'S';
					break;
				case '6':
					string[j] = 'G';
					break;
				case '7':
					string[j] = 'T';
					break;
				case '8':
					string[j] = 'B';
					break;
			}
			if (string[j] != ' '){
				string[j] -= k;
				if (string[j] < 'A') string[j] += 26;
				if (string[j] > 'Z') string[j] = 'A' + ('Z' - string[j]);
			}
		}
		printf("Case #%d: %s\n", i , string);
	}
	
	
    return 0;
}
