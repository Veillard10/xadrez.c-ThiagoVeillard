#include <stdio.h>

// O Tabuleiro possui uma dimensão padrão de 8x8
// Simulação de movimento das peças de xadrez

//Váriaveis que definem os passos de cada peça

int TorresCasa = 5;// Torre se move 5 casas para a direita
int BispoCasa = 5; // Bispo se move 5 casas na diagonal para cima-direita
int RainhaCasa = 8; // Rainha se move 8 casas em todas as as direções

/* ====================================
          Torre  
---------------------------------------
    Exemplo: FOR
    Movimento da Torre: 5 casas para a direita
=======================================
*/
int main() {
    

    printf("Movimento Torre:\n");

    for (int i = 1; i <= TorresCasa; i++) {
        printf("Torre moveu-se %d para Direita\n", i);
    }

    printf("\n"); // Quebra de linha para melhor visualização


/* ====================================
             Bispo 
---------------------------------------
    Exemplo: WHILE
    Movimento do Bispo: 5 casas na diagonal para cima-direita
=======================================*/

    int ContadorBispo = 0;

    printf("Movimento Bispo:\n");

          while(ContadorBispo < BispoCasa) {
               printf(" Cima-Direita\n");
               
               ContadorBispo++;                         

          }
printf("\n"); // Quebra de linha para melhor visualização

/* ====================================
             Rainha
---------------------------------------
    Exemplo: Do-While
    Movimento da Rainha: Todas as direções (8 casas)
=======================================*/


    int ContadorRainha = 1;

    printf("Movimento Rainha:\n");

    do {
        printf("Rainha moveu-se %d casas\n", ContadorRainha);
        ContadorRainha++;
    } while (ContadorRainha <= RainhaCasa);

printf("Fim da simulação de movimentos.\n");

    return 0;
}