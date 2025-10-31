#include <stdio.h>

// O Tabuleiro possui uma dimensão padrão de 8x8
// Simulação de movimento das peças de xadrez


/* ====================================
          Torre  
---------------------------------------
    Exemplo: FOR
    Movimento da Torre: 5 casas para a direita
=======================================
*/
int main() {
    int TorresCasa = 5;

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

    int BispoCasa = 5;
    int ContadorBispo = 1;

    printf("Movimento Bispo:\n");
          
          while("ContadorBispo <= BispoCasa") {
               printf("Bispo moveu-se %d na diagonal para Cima-Direita\n", ContadorBispo);
               ContadorBispo++;                         

          }
printf("\n"); // Quebra de linha para melhor visualização

/* ====================================
             Rainha
---------------------------------------
    Exemplo: Do-While
    Movimento da Rainha: Todas as direções (8 casas)
=======================================*/

    return 0;
}