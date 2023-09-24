#include<stdio.h>

main(){

    int numero, res;
    int contador;

    printf("Digite um numero ");
    scanf("%d", &numero);

    for(int contador = 0; contador <= 5; contador ++){

        res = numero * contador;
        printf("\n %d * %d * %d", numero, contador, res);
    }
}