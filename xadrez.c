#include <stdio.h>
#include <locale.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int t;
    
    //movimento da torre usando for
    printf("Movimento da torre: \n");
    for (t = 1; t <= 5; t++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do bispo usando do-while
    printf("Movimento do bispo:\n");
    int b = 1;
    do
    {
        printf("cima\n");
        printf("direita\n");
        b++;
    } while (b <= 5);
    
    printf("\n");
    
    //Movimento da rainha usando while
    printf("Movimento da rainha:\n");
    int r = 1;
    while (r <= 8)
    {
        printf("esquerda\n");
        r++;
    }

    printf("\n");

   //Movimento do cavalo
   printf("Movimento do cavalo:\n");
    int c = 1;
    while (c--)
    {
        for (int movimentoc = 1; movimentoc <= 2; movimentoc++)
        {
            printf("baixo\n");
        }
        printf("Esquerda\n");
    }
    
    printf("\n");

    return 0;
}

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
