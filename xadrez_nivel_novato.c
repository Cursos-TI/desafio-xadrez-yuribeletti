#include <stdio.h>

int main() {
    int i;
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre (usando for)
    // A Torre move-se em linha reta, e a simulação é de 5 casas para a direita.
    printf("--- Movimento da Torre ---\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo (usando while)
    // O Bispo move-se na diagonal. A simulação é de 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo ---\n");
    i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Rainha (usando do-while)
    // A Rainha move-se em todas as direções. A simulação é de 8 casas para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    i = 0; 
    if (casasRainha > 0) { 
        do {
            printf("Esquerda\n");
            i++;
        } while (i < casasRainha);
    }
    printf("\n");

    return 0;
}