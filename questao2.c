#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char frase[500];
    char *tokens[500];
    char nome[500], numero[500], ponto[500];
    int i = 0;
    
    printf("Digite sua lista aqui:\n");
    while(fgets(frase, sizeof(frase), stdin)) {
    
        char *token = strtok(frase, " ");
        
        while(token != NULL) {
            token[i];
            i++;
            token = strtok(NULL, ",");
        }
        
        for(i = 0; i < strlen(token); i++){
            
            // Ler nome
            if(isalpha(token[i])){
                
                /* // Evita acessar além do tamanho do nome
                if (i < strlen(nome)) { */
                
                token[i] = nome[i];
            }
            // Ler numero
            // precisa diferencia aqui se é int ou float
            
            if(isdigit(token[i])){
                
                int numInteiro = atoi(token[i]);   
                double numDouble = atof(token[i]);


            if(numDouble == (double)numInteiro) {
                 inteiro[i] = token[i];
                }
                else{
                    pontoFlutuante[i] = token[i];
                }
            }
            
            if(strncmp(token[i], "(", 1) == 0){
                token[i] = ponto[i];
            }
        }
        
    }
    
    
