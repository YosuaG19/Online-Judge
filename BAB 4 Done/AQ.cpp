#include<stdio.h>
#include<string.h>

int main(){
    int tcase;
    scanf("%d", &tcase);
    for (int i =1 ; i <= tcase ; i++)
    {
        char string[101];
        scanf("%s", &string);
        int l = strlen(string);
        int dot_c = 0, num_c = 0, count = 1;
        for (int j = 0 ; j < l ; j++)
        {
            if (string[0] != '.'){
                if ('0' <= string[j] && string[j] <= '9') num_c = 1;
                if (string[j] == '.' && num_c == 1) dot_c++, num_c = 0, count++;
                else if (string[j] == '.' && num_c == 0) j = l;
            }else{
                j = l;
            }
        }
        printf("Case #%d: ", i);
        if (count == 6 && num_c == 1 && dot_c == 5) printf("YES\n");
        else printf("NO\n");
        
    }
}