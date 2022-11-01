/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int numero;

void contagemPositivo(numero){
    for(int i = numero; i >= 0; i--){
        printf("%d \n", i);
    }
}

void contagemNegativo(numero){
    for(int i = numero; i <= 0; i++){
        printf("%d \n", i);
    }
}
int main()
{
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    contagemPositivo(numero);
    contagemNegativo(numero);

    return 0;
}

