
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char string[30];
    scanf("%s", string);
    int count = 0;
    int index = 0;
    
    for (int i = 0; i < strlen(string) - 3; i++){
        for (int j = i + 1; j < strlen(string) - 2; j++){
            if (string[i] == string[j] && string[i+1] == string[j+1] && string[i+2] == string[j+2]){
                printf("YES\n");
                exit(0);
            }
        }
    }
    printf("NO\n");
    
}