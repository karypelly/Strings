#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b ){
	char temp = *a;
	*a = *b;
	*b = temp;
}

void sort(char *word){
	for (unsigned int i = 0; i < strlen(word) - 1; i++)
		for (unsigned int j = i + 1; j < strlen(word); j++)
			if (word[i] > word[j]) 
				swap(&word[i], &word[j]); 
}

char *shorter(char *string_1, char *string_2){
    char static short_string[30];
    int length_1 = strlen(string_1);
    int length_2 = strlen(string_2);
    if (length_1 > length_2){
        for (int i = 0; i < 30; i++){
            short_string[i] = string_2[i];
        }
    }else if (length_2 > length_1){
        for (int i = 0; i < 30; i++){
            short_string[i] = string_1[i];
        }
    }
    return short_string;
}

char *longer(char *string_1, char *string_2){
    char static long_string[30] = {0};
    int length_1 = strlen(string_1);
    int length_2 = strlen(string_2);
    if (length_1 > length_2){
        for (int i = 0; i < 30; i++){
            long_string[i] = string_1[i];
        }
    }else if (length_2 > length_1){
        for (int i = 0; i < 30; i++){
            long_string[i] = string_2[i];
        }
    }
    return long_string;
}

void deleteduplicate(char *s,char c){
	int i, k=0;
    for(i = 0; s[i]; i++){
     	s[i] = s[i+k];
     	if(s[i]==c){
		    k++;
		    i--;
	    }
    }
}
 
char findduplicate(char *s){
	char c='*';
	int i,j;
    for (i = 0; s[i]; i++){
    	if (!(s[i] ==c )){
    		for(j = i + 1; s[j]; j++){
            	if(s[i] == s[j]){
            	    s[j] = c;
                }
		    }	
		}
    }
	return c;
}

int ans(char *long_string, char *short_string){
    if (strlen(long_string) == strlen(short_string)){
        return 1;
    }
    for (int i = 0; i < (strlen(long_string) - strlen(short_string)); i++){ 
        int j = 0;
        for (j = 0; j < strlen(long_string); j++){
            if (long_string[i + j] != short_string[j]){
                break;
            }
        }
        if (j == strlen(short_string)){
            return 1;
        }
    }
    return 0;
}

int main(void){
    char string_1[30];
    char string_2[30];
    scanf("%s %s", string_1, string_2);
    
	char *short_string = shorter(string_1, string_2);
    char *long_string = longer(string_1, string_2);
    char c = findduplicate(short_string);
    char d = findduplicate(long_string);
    deleteduplicate(short_string, c);
    deleteduplicate(long_string, d);
    sort(short_string);
    sort(long_string);

    printf("%s ", short_string);
    printf("%s\n", long_string);


    if (ans(long_string, short_string) == 1){
        printf("%s is contained in %s\n", shorter(string_1, string_2), longer(string_1, string_2));
    }
}
