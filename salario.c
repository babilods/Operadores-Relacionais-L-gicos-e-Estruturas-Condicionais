#include<stdio.h>

main(){

    int salario, salarioMinimo = 1320;
    printf("Digite seu salario");
    scanf("%d",&salario);

    if(salario > salarioMinimo){
        printf("ganha mais que um salario minimo");
    }else{
        printf("ganha menos que um salario minimo");
    }
}