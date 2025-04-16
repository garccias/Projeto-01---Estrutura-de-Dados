#include <stdio.h>
#include <math.h>

int main() {
    
    char frase[200];
    int x[100], y[100];
    int i = 0, j = 0;
    float distancia[100];
    float shortcut;
    int k, v, m, temp, tempX, tempY;
    
    printf("Digite as coordenadas aqui:\n");
    while(fgets(frase, sizeof(frase), stdin)){

        
        i = 0;
        char *ponteiro = frase;
    
        while(*ponteiro){
        
            if(*ponteiro == '(') {
            
                if(sscanf (ponteiro, "(%d, %d)", &x[i], &y[i]) == 2){
                    
                    /* // Guardando os pontos originais para o cálculo da distância total
                    x_original[i] = x[i];
                    y_original[i] = y[i]; */
                    
                    i++;
                }
            
                    }
    ponteiro++;
    }
    
    /* // Calculando a distância total na ordem original dos pontos
        for(j = 1; j < i; j++){
            distance_total += hypot(x_original[j] - x_original[j-1], y_original[j] - y_original[j-1]); */
    
    // Calculando a distancia ✅
    for(j = 0; j < i; j++){
        
        distancia[j] = hypot(x[j], y[j]);
    }
    
    // Calculando o shortcut ✅
    shortcut = hypot(x[0] - x[i - 1], y[0] - y[i - 1]);
    
    // Metodo de ordenacao ✅
    
    for(k = 0; k < i - 1; k++){
        
        for(m = 0; m < i - k - 1; m++){
            
            if(distancia[m] > distancia[m + 1]){
                
                // Ordenando a distancia
                temp = distancia[m];
                distancia[m] = distancia[m + 1];
                distancia[m + 1] = temp;
                
                // Ordenando X 
                
                tempX = x[m];
                x[m] = x[m + 1];
                x[m + 1] = tempX;
                
                // Ordenando Y
                
                tempY = y[m];
                y[m] = y[m + 1];
                y[m + 1] = tempY;
                
                
            }
        }
    }
    // Mostrar a ordenacao, com os pontos
    
    for(v = 0; v < i; v++){
        
        printf("(%d, %d)\n", x[v], y[v]);
    }
 
        }
}

