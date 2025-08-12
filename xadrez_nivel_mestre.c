#include <stdio.h>

// Movimento da Torre (recursivo: 5 casas para a direita)
void movimentoTorre(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Direita\n");
        movimentoTorre(casasRestantes - 1);
    }
}

// Movimento do Bispo (recursivo com loops aninhados: 5 casas na diagonal)
void movimentoBispoVertical(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Cima\n");
        movimentoBispoHorizontal(casasRestantes);
    }
}

void movimentoBispoHorizontal(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Direita\n");
        movimentoBispoVertical(casasRestantes - 1);
    }
}

// Movimento da Rainha (recursivo: 8 casas para a esquerda)
void movimentoRainha(int casasRestantes) {
    if (casasRestantes > 0) {
        printf("Esquerda\n");
        movimentoRainha(casasRestantes - 1);
    }
}

// Movimento do Cavalo (duas casas para cima e uma para a direita)
void movimentoCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    // Quantidade de casas para o movimento
    int casasTorre = 5, casasBispo = 5, casasRainha = 8;

    // Movimentos
    printf("--- Movimento da Torre ---\n");
    movimentoTorre(casasTorre);
    printf("\n");

    printf("--- Movimento do Bispo ---\n");
    movimentoBispoVertical(casasBispo);
    printf("\n");

    printf("--- Movimento da Rainha ---\n");
    movimentoRainha(casasRainha);
    printf("\n");

    printf("--- Movimento do Cavalo ---\n");
    movimentoCavalo();
    printf("\n");

    return 0;
}
