/******************************************************************************

Nome: Amanda Gomes Ferreira

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    //entrada
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    //validacao
    while(numero == 0){
        printf("Informe um número mais que zero: ");
        scanf("%d", &numero);
    }
    if(numero > 0) {
        //saida
        for(int i = numero; i >= 0; i--){
            printf("contagem %d \n", i);
        }  
        
    } else{
        //saida
        for(int i = numero; i <= 0; i++){
            printf("contagem %d \n", i);
        }
    } 

}
