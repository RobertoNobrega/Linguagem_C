#include <stdio.h>

int main(void){
    int valor1, valor2, soma;
    printf("\n\t\tPrograma para Soma de Dois Números.\n\n\tPrimeiro Número: ");
    scanf("%d",&valor1);
    setbuf(stdin,NULL);
    printf("\n\tSegundo Número: ");
    scanf("%d",&valor2);
    setbuf(stdin,NULL);
    soma = valor1 + valor2;
    printf("\n\tA Soma de %d + %d = %d \n",valor1,valor2,soma);
    return 0;
}
