#include <stdio.h>
#include <stdlib.h>


void inverter(int vetor[], int inicio, int fim){
    int aux;
    if(inicio < fim){
        aux = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = aux;
        inverter(vetor, inicio + 1, fim - 1);
    }
}

void imprimir(int vetor[], int tam){
    if(tam == 1)
        printf("%d ", vetor[tam - 1]);
    else{
        imprimir(vetor, tam - 1);
        printf("%d ", vetor[tam - 1]);
    }
}

int main () {

    int vetor[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o vetor que deseja inverter :");
    scanf("%d",&vetor[i]);
    }

    imprimir(vetor, 10);
    inverter(vetor, 0, 9); 
    printf("\n");
    imprimir(vetor, 10);

    return 0;
}