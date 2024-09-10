#include <stdio.h>
#include <string.h>

int main() {
    
    char palavra[11];
    char letra;
    int vidas, i, j;
    int comprimento;
    int acertou;
    int tentativas;
    int letraEncontrada;

    printf("Digite a palavra (maximo 10 caracteres): ");
    scanf("%10s", palavra);

    comprimento = strlen(palavra);
    vidas = comprimento + 2;
    tentativas = 0;
    acertou = 0;
    letraEncontrada = 0;

    char progresso[11] = {0};
    for (i = 0; i < comprimento; i++) {
        progresso[i] = '_';
    }
    progresso[comprimento] = '\0';

    while (vidas > 0 && acertou < comprimento) {
        printf("\nPalavra: %s\n", progresso);
        printf("Vidas: %d\n", vidas);
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        letraEncontrada = 0;

        for (i = 0; i < comprimento; i++) {
            if (palavra[i] == letra) {
                progresso[i] = letra;
                letraEncontrada = 1;
                acertou++;
            }
        }

        if (!letraEncontrada) {
            vidas--;
            printf("A letra '%c' NAO ESTA na palavra.\n", letra);
        } else {
            printf("A letra '%c' ESTA na palavra.\n", letra);
        }

        if (acertou == comprimento) {
            printf("\nVoce descobriu a palavra: %s\n", palavra);
            break;
        }
    }

    if (vidas <= 0) {
        printf("\nVoce perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}
