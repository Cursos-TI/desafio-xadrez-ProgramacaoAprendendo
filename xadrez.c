#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre;
    int bispo = 0;
    int rainha = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Implementação de Movimentação da Torre

    for(torre = 0; torre <= 4; torre++){
        printf("Torre se movimentou para direita!.\n");
    }

    // Implementação de Movimentação da Rainha
    
    do
    {
        printf("Rainha se moveu para esquerda!.\n");
        rainha++;
    } while (rainha <= 7);

     // Implementação de Movimentação do Bispo

    while (bispo <= 4)
    {
        printf("Bispo se moveu cinco casas para Cima, Direita!.\n");
        bispo++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int cavalo = 1;

    while (cavalo < 2)
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("Cavalo se moveu para cima!.\n");
        }
        printf("Cavalo se moveu para direita!.\n");
        cavalo++;
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
