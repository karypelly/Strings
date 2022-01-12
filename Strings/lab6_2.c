#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    char string_1[30];
    char string_2[30];
    scanf("%s %s", string_1, string_2);

    int length_1 = strlen(string_1);
    int length_2 = strlen(string_2);
    char short_string[30];
    char long_string[30];

    if (length_1 > length_2){
        for (int i = 0; i < 30; i++){
            short_string[i] = string_2[i];
            long_string[i] = string_1[i];
        }
    }else if (length_2 > length_1){
        for (int i = 0; i < 30; i++){
            short_string[i] = string_1[i];
            long_string[i] = string_2[i];
        }
    }else{
        if (strcmp(string_1, string_2) == 0){
            printf("identical string\n");
            exit(0);
        }else{
            printf("%s is not equal to %s\n", string_1, string_2);
            exit(0);
        }
    }
    int ans = 0;
    for (int i = 0; i < (strlen(long_string) - strlen(short_string)); i++){
        int j = 0;
        for (j = 0; j < strlen(long_string); j++){
            if (long_string[i + j] != short_string[j]){
                break;
            }
        }
        if (j == strlen(short_string)){
            ans = 1;
        }
    }
    if (ans == 1){
        for (int k = 0; k < strlen(short_string); k++){
            printf("%c", short_string[k]);
        }
        printf(" is a substring of ");
        for (int l = 0; l < strlen(long_string); l++){
            printf("%c", long_string[l]);
        }
        printf("\n");
    }else if (ans == 0){
        for (int k = 0; k < strlen(short_string); k++){
            printf("%c", short_string[k]);
        }
        printf(" is not a substring of ");
        for (int l = 0; l < strlen(long_string); l++){
            printf("%c", long_string[l]);
        }
        printf("\n");
    }
}