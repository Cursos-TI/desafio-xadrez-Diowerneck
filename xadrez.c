#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Função recursiva para mover a Torre

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para mover o Cavalo usando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    int j = 0;
    do {
        printf("Direita\n");
        j++;
    } while (j < 1);
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

// Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}
// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}
// Função para mover o Cavalo usando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    int j = 0;
    do {
        printf("Direita\n");
        j++;
    } while (j < 1);
}
int main() {
    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");
    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");
    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");
    // Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
