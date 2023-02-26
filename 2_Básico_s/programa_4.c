#include <stdio.h>

int calcularFatorial_1(int valor){  /* Maneira Tradicional. */
    int valorFatorial = 1;
    if(valor < 0) // OBS: Não existe Fatorial para os números inteiros negativos. Ou seja, apenas para o conjunto dos números naturais.
       return -1;
    while(valor > 1){
        valorFatorial *= valor; /* Isso é o mesmo que:   valorFatorial = valorFatorial * valor;     */
        --valor;
    }
    return valorFatorial;
}

int calcularFatorial_2(int valor){ /* Maneira Recursiva. */
    if(valor < 0)
       return -1;
    else if(valor == 0 || valor == 1) // || é a disjunção inclusiva.
       return 1;
    return valor * calcularFatorial_2(valor - 1); // Chamada Recursiva Aqui.
}

void comecarPrograma(void){
     int valor1, valor2;
     printf("\n\t\tPrograma para Calcular Fatorial\n\n\n"
     "\tInsira um primeiro valor: ");
     scanf("%d",&valor1);
     setbuf(stdin,NULL); // Limpando o Buffer do Teclado, após o uso do scanf.
     printf("\n\tInsira um segundo valor: ");
     scanf("%d",&valor2);
     setbuf(stdin,NULL);
     printf("\n\n\t\tResultado\n\n\t1 - Fatorial de %d vale %d \n\t2 - Fatorial de %d vale %d \n\n",valor1,calcularFatorial_1(valor1),
     valor2,calcularFatorial_2(valor2));
}

int main(void){
    comecarPrograma();
    return 0;
}