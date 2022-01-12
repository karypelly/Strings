#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){

    char string[30];
    scanf("%s", string);    
    for (int i = 0; i < strlen(string) - 3; i++){
        for (int j = 0; j < 3; j++){
            if (string[i + j + 1] - string[i + j] == 1 && string[i + j + 2] - string[i + j + 1] == 1){
                printf("YES");
                exit(0);
            }
        }
    }
    printf("NO");
}