#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char s[20];
	
	int k = 0;
	for (k = 0; k < 20; k++){
   		scanf("%s", &s[k]);
    	if(getchar() == '\n'){
    		break;
    	} 
	}

	int i = 0;
	
	int count = 0;
	int max = 0;
	for (i = 0; i < strlen(s); i++){
    	if(s[i] != '1' && s[i] != '0'){
			printf("invalid string\n");
			exit(0);
		}

		if (s[i] == '1'){
			count = count + 1;
			if (count > max){
				max = count;
			}
		}else{
			count = 0;
		}
	}
	
	printf("%d\n", max);
}