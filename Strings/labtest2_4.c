#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char string[100][20];
	int i, n;
	scanf("%d", &n);

	for(i = 0; i < n ; i++) {
		scanf("%s", string[i]);
	}
    for (int j = 0; j < n; j++){
        for (int k = j + 1; k < n; k++){
            if (strcmp(string[j], string[k]) == 0){
                printf("Repeated\n");
                exit(0);
            }
        }
    }
    printf("NO Repetition\n");
    return 0;
    
}