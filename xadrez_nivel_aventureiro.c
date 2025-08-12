#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça se move
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1; // Movimento "L" do Cavalo

    // Movimento da Torre (5 casas para a direita)
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");  // Imprime "Direita" para cada casa movida
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal: cima e direita)
    printf("--- Movimento do Bispo ---\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++; // Incrementa o contador
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("--- Movimento da Rainha ---\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++; // Incrementa o contador
    } while (i < casasRainha);
    printf("\n");

    // Movimento do Cavalo (duas casas para baixo e uma para a esquerda)
    printf("--- Movimento do Cavalo ---\n");
    for (int i = 0; i < movimentosCavalo; i++) {
        int passo = 0;
        while (passo < 2) { // Movimento para baixo
            printf("Baixo\n");
            passo++; // Incrementa o contador
        }
        printf("Esquerda\n"); // Movimento para a esquerda
    }
    printf("\n");

    return 0; // Finaliza o programa
}