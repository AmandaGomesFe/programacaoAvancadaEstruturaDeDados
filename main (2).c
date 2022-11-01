/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int idade, dias;

void diasIdade(idade){
    dias = idade * 365;
    printf("A sua idade em dias é: %d", dias);
}

int main()
{
    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    while(idade > 150){
        scanf("%d", &idade);
    }
    diasIdade(idade);

}

