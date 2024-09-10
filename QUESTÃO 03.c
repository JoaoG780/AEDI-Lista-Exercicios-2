#include <stdio.h>

int main() {
    
    int contas_ativas [] = {11,17,20,37,44,46,48,56,76,100,105,121,123,124,151,154,171,175,183,184,189,190,199,224,226,231,233,241,246,259,265,274,280,281,287,303,304,307,310,311,312,331,348,359,372,382,401,404,407,410,414,457,461,465,478,498,517,530,533,536,537,539,549,593,606,611,619,640,644,655,657,666,672,677,692,719,725,732,734,736,738,771,775,780,789,807,817,847,853,858,875,883,904,906,913,918,934,944,955,960};
    
    int tamanho = 100;
    int conta_buscada;
    int inicio = 0;
    int fim = tamanho -1;
    int meio;
    int contador = 0;
    
    int controle = -1;
    
    printf("Digite a conta buscada: ");
    scanf("%d", &conta_buscada);
    
    while (inicio <= fim) {
        meio = (inicio + fim) /2;
        contador++;
        
        if (contas_ativas [meio] == conta_buscada){
            controle = meio;
            break;
        } else if (contas_ativas[meio] < conta_buscada ) {
            inicio = meio + 1;
        } else {
            fim = meio -1;
        }
    }
    
    if (controle == -1) {
        printf("A conta buscada nao existe\n");
    } else {
        printf ("A conta buscada foi encontrada na posicao %d\n", meio);
    }
    printf ("Foram necessárias: %d comparações para determinar se a conta está presente.", contador);
    
    return 0;
}
