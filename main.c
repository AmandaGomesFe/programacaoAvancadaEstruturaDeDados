/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
# define TAMANHO 5

int v[TAMANHO], s = 0, n, media;

void soma(n){
    s = s + n;
    printf("soma: ", s);
}
int main()
{   
    for(int i = 0; i < TAMANHO; i++){
        printf("Informe um número: ");
        scanf("%d", &v[TAMANHO]); 
        soma(v[TAMANHO]);
    }
    
    
    
    
    

    return 0;
}

