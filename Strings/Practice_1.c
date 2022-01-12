#include <stdio.h>
#include <string.h>

int main(void){

    char f[30];

    char l[30];
    scanf("%s %[^\n]s", f, l);
    
    int count = 0;
    for (int i = 0; i < strlen(l); i++){
        if (l[i] == ' '){
            count++;
        }
    }
    char lastName[100];
    char initialM;
    int k = 0;
    if (count ==  1){
        for (int j = 0; j < strlen(l); j++){
            if (l[j] == ' '){
                for (int a = 0; a < strlen(l) - j; a++){
                    lastName[k] = l[j + a + 1];
                    k++;
                }
                
            }
            
        }
        char ininialF = f[0];
        initialM = l[0];
        printf("%s, %c. %c.\n", lastName, ininialF, initialM);
    }else{
        for (int i = 0; i < strlen(l); i++){
            lastName[i] = l[i];
        }
        char ininialF = f[0];

        printf("%s, %c. %c\n", lastName, ininialF, initialM);
    }
        

}