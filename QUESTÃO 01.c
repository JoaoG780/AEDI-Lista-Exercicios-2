#include <stdio.h>

int main() {
    
    int primos [] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    
    int tamanho = 20;
    int num_digitado;
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    
    int controle = -1;
    
    printf("Digite um numero de 1 a 100: ");
    scanf("%d", &num_digitado);
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (primos [meio] == num_digitado){
            controle = meio;
            break;
        } else if (primos [meio] < num_digitado) {
            inicio = meio + 1;
        } else {
            fim = meio -1;
        }
    }
    
    if (controle == -1) {
        printf("O numero digitado nao esta na lista de primos.");
    } else {
        printf ("O numero digitado esta na lista de primos.");
    }
    
    
    return 0;
}
