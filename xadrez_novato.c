#include <stdio.h>

// Constantes de movimento
const int PASSOSBISPO = 5;
const int PASSOSTORRE = 5;
const int PASSOSRAINHA = 8;

// Direções de movimento
void cima() { printf("Cima\n"); }
void baixo() { printf("Baixo\n"); }
void esquerda() { printf("Esquerda\n"); }
void direita() { printf("Direita\n"); }

void linha(const char *titulo) { printf("\n--- %s ---\n", titulo); }

// NIVEL NOVATO
void nivelNovato() {
    linha("Nível Novato");

    printf("Bispo - Diagonal superior direita\n");
    for (int i = 0; i < PASSOSBISPO; i++) {
        cima();
        direita();
    }

    printf("\nTorre - Direita\n");
    for (int i = 0; i < PASSOSTORRE; i++) direita();

    printf("\nRainha - Esquerda\n");
    for (int i = 0; i < PASSOSRAINHA; i++) esquerda();
}

// NIVEL AVENTUREIRO
void nivelAventureiro() {
    linha("Nível Aventureiro");

    printf("Cavalo - Movimento em L (baixo e esquerda)\n");
    for (int i = 0; i < 2; i++) baixo();

    int j = 0;
    while (j < 1) {
        esquerda();
        j++;
    }
}

// NIVEL MESTRE - USANDO RECURSIVIDADE
void torreRecursiva(int n) {
    if (n == 0) return;
    direita();
    torreRecursiva(n - 1);
}

void rainhaRecursiva(int n) {
    if (n == 0) return;
    esquerda();
    rainhaRecursiva(n - 1);
}

void bispoRecursivo(int n) {
    if (n == 0) return;
    cima();
    direita();
    bispoRecursivo(n - 1);
}

void nivelMestre() {
    linha("Nível Mestre");

    printf("Bispo - Diagonal direita para cima\n");
    bispoRecursivo(PASSOSBISPO);

    printf("\nTorre - Direita\n");
    torreRecursiva(PASSOSTORRE);

    printf("\nRainha - Esquerda\n");
    rainhaRecursiva(PASSOSRAINHA);

    printf("\nCavalo - Movimento em L (cima e direita)\n");
    for (int i = 0, k = 0; i < 2; i++, k++) {
        if (k == 1) continue;
        cima();
    }
    int c = 0;
    while (c < 1) {
        direita();
        c++;
    }
}

int main() {
    printf("MateCheck - Desafio de Xadrez\n");

    nivelNovato();
    nivelAventureiro();
    nivelMestre();

    printf("\nDesafio concluído.\n");
    return 0;
}