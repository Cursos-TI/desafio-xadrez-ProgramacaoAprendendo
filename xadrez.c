#include <stdio.h>

void torre1loop(int n){
    if(n > 0){
        printf("Torre se moveu para direita!.\n");
        torre1loop(n - 1);
    }
}

void rainha1loop(int n){
    if(n > 0){
        printf("Rainha se moveu para esquerda!.\n");
        rainha1loop(n - 1);
    }
}

void bispo1loop(int n){
    if(n > 0){
        printf("Bispo se moveu para Direita!.\n");
        rainha1loop(n - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre;
    int bispo = 0;
    int rainha;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Implementação de Movimentação da Torre

    torre = 5;
    torre1loop(torre);

    // Implementação de Movimentação da Rainha
    
    rainha = 8;
    rainha1loop(rainha);

     // Implementação de Movimentação do Bispo

    for (bispo = 0; bispo < 2; bispo++)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Bispo se moveu para Direita!.\n");
            if (bispo == 1) continue;
        }
        
        if (bispo == 2) break;
        printf("Bispo se moveu para Cima!.\n");
    }
    
    bispo = 1;
    bispo1loop(bispo);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int cavalo = 1;

    while (cavalo < 2 && cavalo < 3)
    {
        for (int i = 0, j = 1; i <= j; i++)
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
