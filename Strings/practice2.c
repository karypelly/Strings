#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){

    char n[20];
    int k = 0;

	for (k = 0; k < 20; k++){
	    scanf("%s", &n[k]);
        if(getchar() == '\n'){
    		break;
    	} 
    }
    for (k = strlen(n); k > -1; k--){
        printf("%c", n[k]);
    }
    printf("\n");
}
